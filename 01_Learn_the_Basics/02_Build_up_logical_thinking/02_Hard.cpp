//  Core Concept: Hard patterns combine increasing + decreasing sequences (or two shapes) in the same row — not just a single simple loop.

//  Approach:
// 1.Split pattern into upper half + lower half (if symmetric)
// 2.In each row, separate increasing / gap / decreasing segments
// 3.Code each segment as its own small loop, then combine
// 4.Dry-run 3 rows on paper first — bugs are usually off-by-one, not wrong logic
