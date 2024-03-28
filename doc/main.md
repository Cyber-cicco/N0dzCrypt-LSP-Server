# Documentation for the LSP

This is the doc where I'm taking notes about the way I intend to dev the LSP.

## Brief summary of a html document initialization

When opening an HTML file, it should do three things :

  * Get the context on the backend files that irrigate the template with a list of available objects.
  * Get the context on the frontend fragments that the template can call to.
  * Parse the HTML structure and irrigate each node with additional context objects if needed.

When first opening a file, it should get indexed to put infos in memory / in a key value store file (depend if it takes too much memory to index a whole project).
Indexing should work like this :

  * You try to find the nodzcrypt file, that will give you back a session if you parse it. If it can't be found,  send back an error. If it can, try and find if a session is already open with a file with the same URL. If it isn't, create one. If it is, use the already open session going forward.

  * Locate the routes file within the project, and get to it. It will give you a map that links the variable name to the absolute url of its file. If the session already has a map of routes that is not nil, checksum the content of the route to see if it has changed since the last time you opened it. It it hasn't, don't do anything. If it has, reparse it and rebuild the map.

  * Than, you parse every java file in the pages folder and subfolders. In that java file, you will find a datastructure that allows you to pass the URL of a file and get back a list of methods that can give context objects to it. To prevent parsing a file that is already in memory, you check if it's URL exists in a map of the session.If it does, you check if it is open in a buffer. If it is, since the datastructure changes every time the text editor does something, it should be up to date, and you don't need to reparse it. If it is note open but the URL exists, you will need to checksum it to see if it has changed. If it hasn't no need to parse again. If it has, you need to reparse it.

  * Since you don't want to have to reparse and reindex everything everytime there's a minor change in a java file, you will have to have a different object for every method. Each method would have it's own internals, it's own parse tree, it's own context objects, it's own dependencies. Will be indexed a method that takes the spring.UI.Model interface as a parameter. So you have  to:
    * Parse the file to find every method with a model.
    * Compare those methods with the one already existing in the java document to see if they have been changed. Need to benchmark to see what is the quickest way to do it.
    * Find any mention of a route variable inside of this method, and create an entry in the map that links the URL to the method.
    * Find any mention of "model.addAttribute" to detect any creation of a context object.

  * While doing this, it should also inspect those "URL to methods" maps to find context objects corresponding to your file, and append the methods to a list of context providers.

