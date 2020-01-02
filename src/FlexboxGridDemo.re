module Box = {
  open Css;

  let boxStyle =
    style([
      backgroundColor(`rgba((0, 127, 255, 0.2))),
      padding(1.0->rem),
      marginBottom(1.0->rem),
      borderRadius(0.2->rem),
    ]);
  [@react.component]
  let make = (~children=?) => {
    <div className=boxStyle>
      {switch (children) {
       | Some(stuff) => stuff
       | None => "Box"->React.string
       }}
    </div>;
  };
};
module BsCss = {
  open Css;
  let rowStyle =
    style([
      backgroundColor(`rgba((0, 0, 0, 0.2))),
      padding2(~v=0.5->rem, ~h=0.5->rem),
    ]);
  let colStyle =
    style([
      backgroundColor(`rgba((0, 0, 0, 0.2))),
      borderColor(`rgba((0, 0, 0, 0.2))),
      borderWidth(1->px),
      borderStyle(`solid),
      padding2(~v=0.5->rem, ~h=0.5->rem),
    ]);
  [@react.component]
  let make = () => {
    <>
      <h1> "Bs-Css Compatibility"->React.string </h1>
      <p> "Add extra styles with the className tag"->React.string </p>
      <Row className=rowStyle>
        <Col className=colStyle xs=3> "1"->React.string </Col>
        <Col className=colStyle xs=3> "2"->React.string </Col>
        <Col className=colStyle xs=3> "3"->React.string </Col>
        <Col className=colStyle xs=3> "4"->React.string </Col>
      </Row>
    </>;
  };
};
module Alignment = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Alignment"->React.string </h1>
      <p>
        "start | center | _end | top | middle | bottom = `xs | `sm | `md | `lg"
        ->React.string
      </p>
      <Box>
        <Row start=`xs> <Col> <Box> "Start"->React.string </Box> </Col> </Row>
      </Box>
      <Box>
        <Row center=`xs>
          <Col> <Box> "Center"->React.string </Box> </Col>
        </Row>
      </Box>
      <Box>
        <Row _end=`xs> <Col> <Box> "End"->React.string </Box> </Col> </Row>
      </Box>
      <Box>
        <Row top=`xs>
          <Col xs=6> <Box> "Top"->React.string </Box> </Col>
          <Col xs=6>
            <Box>
              <p> "Line 1"->React.string </p>
              <p> "Line 2"->React.string </p>
            </Box>
          </Col>
        </Row>
      </Box>
      <Box>
        <Row middle=`xs>
          <Col xs=6> <Box> "Middle"->React.string </Box> </Col>
          <Col xs=6>
            <Box>
              <p> "Line 1"->React.string </p>
              <p> "Line 2"->React.string </p>
            </Box>
          </Col>
        </Row>
      </Box>
      <Box>
        <Row bottom=`xs>
          <Col xs=6> <Box> "bottom"->React.string </Box> </Col>
          <Col xs=6>
            <Box>
              <p> "Line 1"->React.string </p>
              <p> "Line 2"->React.string </p>
            </Box>
          </Col>
        </Row>
      </Box>
    </>;
  };
};

module Distribution = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Distribution"->React.string </h1>
      <p> "around | between = `xs | `sm | `md | `lg"->React.string </p>
      <Box>
        <Row around=`xs>
          <Col xs=2> <Box> "Around"->React.string </Box> </Col>
          <Col xs=2> <Box> ""->React.string </Box> </Col>
          <Col xs=2> <Box> ""->React.string </Box> </Col>
        </Row>
      </Box>
      <Box>
        <Row between=`xs>
          <Col xs=2> <Box> "Between"->React.string </Box> </Col>
          <Col xs=2> <Box> ""->React.string </Box> </Col>
          <Col xs=2> <Box> ""->React.string </Box> </Col>
        </Row>
      </Box>
    </>;
  };
};

module Fluid = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Fluid"->React.string </h1>
      <p> "`none | `xs | `sm | `md | `lg"->React.string </p>
      <Row>
        <Col fluid=`xs> <Box /> </Col>
        <Col fluid=`xs> <Box /> </Col>
        <Col fluid=`xs> <Box /> </Col>
        <Col fluid=`xs> <Box /> </Col>
      </Row>
      <Row>
        <Col fluid=`xs> <Box /> </Col>
        <Col fluid=`xs> <Box /> </Col>
        <Col fluid=`xs> <Box /> </Col>
      </Row>
      <Row>
        <Col fluid=`xs> <Box /> </Col>
        <Col fluid=`xs> <Box /> </Col>
      </Row>
    </>;
  };
};

module Nested = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Nested"->React.string </h1>
      <p> "Nested Rows / Columns work"->React.string </p>
      <Row>
        <Col xs=8>
          <Box>
            <Row>
              <Col xs=8>
                <Box>
                  <Row>
                    <Col xs=6> <Box /> </Col>
                    <Col xs=6> <Box /> </Col>
                  </Row>
                </Box>
              </Col>
              <Col xs=4> <Box> <Box /> </Box> </Col>
            </Row>
          </Box>
        </Col>
        <Col xs=4>
          <Box>
            <Row>
              <Col xs=6> <Box> <Box /> </Box> </Col>
              <Col xs=6> <Box> <Box /> </Box> </Col>
            </Row>
          </Box>
        </Col>
      </Row>
    </>;
  };
};

module Offsets = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Offsets"->React.string </h1>
      <p>
        "xsOffset | smOffset | mdOffset | lgOffset = int (0 - 12)"
        ->React.string
      </p>
      <Row>
        <Col xsOffset=11 xs=1> <Box /> </Col>
        <Col xsOffset=10 xs=2> <Box /> </Col>
        <Col xsOffset=9 xs=3> <Box /> </Col>
        <Col xsOffset=8 xs=4> <Box /> </Col>
        <Col xsOffset=7 xs=5> <Box /> </Col>
        <Col xsOffset=6 xs=6> <Box /> </Col>
        <Col xsOffset=5 xs=7> <Box /> </Col>
        <Col xsOffset=4 xs=8> <Box /> </Col>
        <Col xsOffset=3 xs=9> <Box /> </Col>
        <Col xsOffset=2 xs=10> <Box /> </Col>
        <Col xsOffset=1 xs=11> <Box /> </Col>
      </Row>
    </>;
  };
};

module Reordering = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Reordering"->React.string </h1>
      <p> "first | last = `xs | `sm | `md | `lg"->React.string </p>
      <Box>
        <Row>
          <Col xs=3> <Box> "1"->React.string </Box> </Col>
          <Col xs=3> <Box> "2"->React.string </Box> </Col>
          <Col xs=3> <Box> "3"->React.string </Box> </Col>
          <Col xs=3 first=`xs> <Box> "4"->React.string </Box> </Col>
        </Row>
      </Box>
      <Box>
        <Row>
          <Col xs=3 last=`xs> <Box> "1"->React.string </Box> </Col>
          <Col xs=3> <Box> "2"->React.string </Box> </Col>
          <Col xs=3> <Box> "3"->React.string </Box> </Col>
          <Col xs=3> <Box> "4"->React.string </Box> </Col>
        </Row>
      </Box>
    </>;
  };
};

module Responsive = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Responsive"->React.string </h1>
      <p> "xs | sm | md | lg = int (0 - 12)"->React.string </p>
      <Row>
        <Col xs=12 sm=6 md=3> <Box /> </Col>
        <Col xs=12 sm=6 md=3> <Box /> </Col>
        <Col xs=12 sm=6 md=3> <Box /> </Col>
        <Col xs=12 sm=6 md=3> <Box /> </Col>
      </Row>
    </>;
  };
};

module Reverse = {
  [@react.component]
  let make = () => {
    <>
      <h1> "Reverse"->React.string </h1>
      <p> "reverse = true | false"->React.string </p>
      <Box>
        <Row reverse=true>
          <Col xs=3> <Box> "1"->React.string </Box> </Col>
          <Col xs=3> <Box> "2"->React.string </Box> </Col>
          <Col xs=3> <Box> "3"->React.string </Box> </Col>
          <Col xs=3> <Box> "4"->React.string </Box> </Col>
        </Row>
      </Box>
    </>;
  };
};
