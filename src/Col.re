open FlexboxGridHelpers;

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
      ~className="",
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
      className,
    |]
    ->ignoreEmptyAndConcatenate;

  <div className=totalOptions> children </div>;
};
