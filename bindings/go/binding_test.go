package tree_sitter_cobol_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_cobol "github.com/willswire/tree-sitter-cobol/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cobol.Language())
	if language == nil {
		t.Errorf("Error loading Cobol grammar")
	}
}
