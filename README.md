# bs-flexboxgrid
This is a small wrapper written around the `flexboxgrid` (http://flexboxgrid.com/) library. It's not written in a way to eliminate the CSS by using BS-CSS, but rather as a wrapper for the classes. It's API is similarly implemented to the `react-styled-flexboxgrid` (https://www.npmjs.com/package/react-styled-flexboxgrid).

# Usage
## Installation 
1. Install
```
yarn add bs-flexboxgrid
```
2. Add `bs-flexboxgrid` to your `bsconfig`
3. Namespace is `Flexboxgrid` (i.e. `Flexboxgrid.Row` or `Flexboxgrid.Col` or `open Flexboxgrid`)

## Types 
Types are similar to the `bs-css` ones in language.
```
type breakpoint = [
  | `none
  | `xs
  | `sm
  | `md
  | `lg 
];
```

## Row
NOTE - To keep the interface as clean as possible, all values, while technically optional, have defaulted fallbacks so no need for `Some(value)`.
```typescript
<Row start=breakpoint?
     center=breakpoint?
     _end=breakpoint?
     top=breakpoint?
     middle=breakpoint?
     bottom=breakpoint?
     around=breakpoint?
     between=breakpoint?
     reverse=boolean?
     className=string?>
 ...someStuff
</Row>
```

## Column
NOTE - To keep the interface as clean as possible, all values, while technically optional, have defaulted fallbacks, so no need for `Some(value)`.
```typescript
<Col fluid=breakpoint?
     first=breakpoint?
     last=breakpoint?
     xs=int?
     sm=int?
     md=int?
     lg=int?
     xsOffset=int?
     smOffset=int?
     mdOffset=int?
     lgOffset=int?
     className=string?>
 ...someStuff
</Col>
```

# Examples
The full exampleset as found on the flexboxgrid website, can be found by cloning this repo / starting it. 
