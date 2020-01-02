%raw
"import 'flexboxgrid'";

let offset = (breakpoint, offset) => {
  switch (offset) {
  | Some(offset) =>
    "col-" ++ breakpoint ++ "-offset-" ++ string_of_int(offset) ++ ""
  | None => ""
  };
};

let column = (breakpoint, width) => {
  switch (width) {
  | Some(width) => "col-" ++ breakpoint ++ "-" ++ string_of_int(width) ++ ""
  | None => ""
  };
};

type breakpoints = [ | `none | `xs | `sm | `md | `lg];

let breakpointedProp = (prop, breakpoint) => {
  switch (breakpoint) {
  | `none => ""
  | `xs => prop ++ "-xs"
  | `sm => prop ++ "-sm"
  | `md => prop ++ "-md"
  | `lg => prop ++ "-lg"
  };
};

let booleanProp = (prop, bool) => {
  bool ? prop : "";
};

let ignoreEmptyAndConcatenate = arr =>
  arr |> Js.Array.filter(s => s !== "") |> Js.Array.joinWith(" ");
