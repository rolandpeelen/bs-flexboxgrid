open FlexboxGridHelpers;

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
      ~className="",
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
      className,
    |]
    ->ignoreEmptyAndConcatenate;

  <div className=totalOptions> children </div>;
};
