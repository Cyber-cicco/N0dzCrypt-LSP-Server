package cache

import "testing"

func TestParseSecondCSVEntry(t *testing.T) {
	testString1 := "charAt(int index)"
	testString2 := "compareToIgnoreCase(String str)"
	testString3 := "copyValueOf(char[] data)"
	testString4 := "copyValueOf(char[] data, int offset, int count)"
	testString5 := "format(Locale l, String format, Object... args)"
	testString6 := "hashCode()"

	entry1 := parseSecondCSVEntry(testString1)
	entry2 := parseSecondCSVEntry(testString2)
	entry3 := parseSecondCSVEntry(testString3)
	entry4 := parseSecondCSVEntry(testString4)
	entry5 := parseSecondCSVEntry(testString5)
	entry6 := parseSecondCSVEntry(testString6)

	if entry1.identifier != "charAt" {
		t.Fatalf("expected charAt, got %s", entry1.identifier)
	}
	if entry2.identifier != "compareToIgnoreCase" {
		t.Fatalf("expected compareToIgnoreCase, got %s", entry2.identifier)
	}
	if entry3.identifier != "copyValueOf" {
		t.Fatalf("expected copyValueOf, got %s", entry3.identifier)
	}
	if entry4.identifier != "copyValueOf" {
		t.Fatalf("expected copyValueOf, got %s", entry4.identifier)
	}
	if entry5.identifier != "format" {
		t.Fatalf("expected format, got %s", entry5.identifier)
	}
	if entry6.identifier != "hashCode" {
		t.Fatalf("expected hashCode, got %s", entry6.identifier)
	}

	if entry1.arguments[0] != "int" {
		t.Fatalf("expected int, got %s", entry1.arguments[0])
	}

	if entry2.arguments[0] != "String" {
		t.Fatalf("expected String, got %s", entry2.arguments[0])
	}

	if entry3.arguments[0] != "char[]" {
		t.Fatalf("expected char[], got %s", entry3.arguments[0])
	}

	if entry4.arguments[0] != "char[]" {
		t.Fatalf("expected char[], got %s", entry4.arguments[0])
	}
	if entry4.arguments[1] != "int" {
		t.Fatalf("expected int, got %s", entry4.arguments[1])
	}
	if entry4.arguments[2] != "int" {
		t.Fatalf("expected int, got %s", entry4.arguments[2])
	}

	if entry5.arguments[0] != "Locale" {
		t.Fatalf("expected Locale, got %s", entry5.arguments[0])
	}
	if entry5.arguments[1] != "String" {
		t.Fatalf("expected Locale, got %s", entry5.arguments[1])
	}
	if entry5.arguments[2] != "Object..." {
		t.Fatalf("expected Locale, got %s", entry5.arguments[2])
	}

	if len(entry6.arguments) > 0 {
		t.Fatalf("expected charAt, got %d", len(entry6.arguments))
	}

}
