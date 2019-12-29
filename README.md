# bs-flexboxgrid
This is a small wrapper written around the `flexboxgrid` (http://flexboxgrid.com/) library. It's not written in a way to eliminate the CSS by using BS-CSS, but rather as a wrapper for the classes. It's API is similarly implemented to the `react-styled-flexboxgrid` (https://www.npmjs.com/package/react-styled-flexboxgrid).

# Usage

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
```typescript
<Row start=breakpoint
     center=breakpoint
     _end=breakpoint
     top=breakpoint
     middle=breakpoint
     bottom=breakpoint
     around=breakpoint
     between=breakpoint
     reverse=boolean>
 ...someStuff
</Row>
```

## Column
```typescript
<Col fluid=breakpoint
     first=breakpoint
     last=breakpoint
     xs=int
     sm=int
     md=int
     lg=int
     xsOffset=int 
     smOffset=int 
     mdOffset=int
     lgOffset=int>
 ...someStuff
</Col>
```

# Examples
The full exampleset as found on the flexboxgrid website, can be found by cloning this repo / starting it. 
