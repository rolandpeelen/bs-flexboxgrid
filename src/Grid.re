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

module Col = {
  [@react.component]
  let make =
      (
        ~children,
        ~fluid=`none,
        ~first=`none,
        ~last=`none,
        ~xs=?,
        ~sm=?,
        ~md=?,
        ~lg=?,
        ~xsOffset=?,
        ~smOffset=?,
        ~mdOffset=?,
        ~lgOffset=?,
      ) => {
    let totalOptions =
      [|
        column("xs", xs),
        column("sm", sm),
        column("md", md),
        column("lg", lg),
        offset("xs", xsOffset),
        offset("sm", smOffset),
        offset("md", mdOffset),
        offset("lg", lgOffset),
        breakpointedProp("col", fluid),
        breakpointedProp("first", first),
        breakpointedProp("last", last),
      |]
      |> Js.Array.joinWith("  ");

    <div className=totalOptions> children </div>;
  };
};

module Row = {
  [@react.component]
  let make =
      (
        ~children,
        ~start=`none,
        ~center=`none,
        ~_end=`none,
        ~top=`none,
        ~middle=`none,
        ~bottom=`none,
        ~around=`none,
        ~between=`none,
        ~reverse=false,
      ) => {
    let totalOptions =
      [|
        "row",
        breakpointedProp("start", start),
        breakpointedProp("center", center),
        breakpointedProp("end", _end),
        breakpointedProp("top", top),
        breakpointedProp("middle", middle),
        breakpointedProp("bottom", bottom),
        breakpointedProp("around", around),
        breakpointedProp("between", between),
        booleanProp("reverse", reverse),
      |]
      |> Js.Array.joinWith("  ");
    <div className=totalOptions> children </div>;
  };
};
