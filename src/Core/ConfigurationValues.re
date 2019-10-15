/*
 * ConfigurationValues.re
 *
 * Configuration settings for the editor
 */

[@deriving show({with_path: false})]
type editorRenderWhitespace =
  | All
  | Boundary
  | None;

[@deriving show({with_path: false})]
type vimUseSystemClipboard = {
  yank: bool,
  delete: bool,
  paste: bool,
};

type t = {
  editorDetectIndentation: bool,
  editorFontFamily: option(string),
  editorFontSize: int,
  editorLargeFileOptimizations: bool,
  editorLineNumbers: LineNumber.setting,
  editorMatchBrackets: bool,
  editorMinimapEnabled: bool,
  editorMinimapShowSlider: bool,
  editorMinimapMaxColumn: int,
  editorInsertSpaces: bool,
  editorIndentSize: int,
  editorTabSize: int,
  editorHighlightActiveIndentGuide: bool,
  editorRenderIndentGuides: bool,
  editorRenderWhitespace,
  editorRulers: list(int),
  workbenchActivityBarVisible: bool,
  workbenchColorTheme: string,
  workbenchIconTheme: string,
  /* Onivim2 specific setting */
  workbenchSideBarVisible: bool,
  workbenchEditorShowTabs: bool,
  workbenchStatusBarVisible: bool,
  workbenchTreeIndent: int,
  filesExclude: list(string),
  vimUseSystemClipboard,
  uiShadows: bool,
  uiZoom: float,
  zenModeHideTabs: bool,
  zenModeSingleFile: bool,
  // Experimental feature flags
  // These are 'use-at-your-own-risk' features
  // Turn on merlin integration - the first pass of language integration,
  // specifically for native Reason / OCaml projects.
  experimentalMerlin: bool,
  // Turn on tree-sitter for supported filetypes:
  // - JSON
  experimentalTreeSitter: bool,
  experimentalAutoClosingPairs: bool,
};

let default = {
  editorDetectIndentation: true,
  editorFontFamily: Some("FiraCode-Regular.ttf"),
  editorFontSize: 14,
  editorLargeFileOptimizations: true,
  editorMatchBrackets: true,
  editorMinimapEnabled: true,
  editorMinimapShowSlider: true,
  editorMinimapMaxColumn: Constants.default.minimapMaxColumn,
  editorLineNumbers: On,
  editorInsertSpaces: false,
  editorIndentSize: 4,
  editorTabSize: 4,
  editorRenderIndentGuides: true,
  editorHighlightActiveIndentGuide: true,
  editorRenderWhitespace: All,
  editorRulers: [],
  workbenchActivityBarVisible: true,
  workbenchColorTheme: "One Dark Pro",
  workbenchEditorShowTabs: true,
  workbenchSideBarVisible: true,
  workbenchStatusBarVisible: true,
  workbenchIconTheme: "vs-seti",
  workbenchTreeIndent: 2,
  filesExclude: ["node_modules", "_esy"],
  uiShadows: true,
  uiZoom: 1.0,
  vimUseSystemClipboard: {
    yank: true,
    delete: false,
    paste: false,
  },
  zenModeHideTabs: true,
  zenModeSingleFile: true,

  experimentalMerlin: false,
  experimentalTreeSitter: false,
  experimentalAutoClosingPairs: false,
};
