let key = {|-----BEGIN PRIVATE KEY-----
MIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQDrwF3OcY/HXGKI
ySrvFbuu1OuYU1MlObseE//LdXm5P9jkr9u0N/NiAc4MLpfg1GmcH4l7ctogA3dq
NPihxxRHLM6BsbTIbKQ8A8xaO6K6OoKAQ5Xk3XPB+7ASABVGFtO/kilQDSwqdrw0
xkvGCD4pzN10iPzd8PhpsuSUoQBUAv6QfqLunT6ubSzZFBloKzOeXu66iG1vD7Ee
RyYqzV5cVSGwipnTC7lH0p7K/H+3j8D8kGPeshuckN9IHuRTnyxQDQfRcLlHc9rp
PD9Rqxifd/lg2/KSzqfmCGNdguI8mNnlyFg+ftTykh4/GVMiLo14VEOOScIkxN5Y
fw2O/ukLAgMBAAECggEARvDfCYVgt6QUPocSdVl73bNSpcbFKVmC9h0chxP1qgoN
cVt96HBBu8dBQqcuqsggc4uF6nD4NFP2ti30d3IZpwVTqvFXrkwK68hU0P5LDHEY
3hH4ZCNDdycOp4wA2tN5qpcH+X/NP4X1Qog9Ov01/4wXQ78JIJwnlF7xq8v69kxQ
bLyWTcbwMDAJTpfrEy8jKKsBjtEQxzzDC+80+MjU3iGlKjp9D6GwmVfl2NzekF2c
FIxwrt97ZHHnrg8qpc/G5jnIZ/ibSQVmZPAiCae/Xab1tpU7VBG+4li3JEj7Z0/t
xEGJQvVc1fcPrmgd3Gcwbzp4d83ir15t6LqVf3DIiQKBgQD+0pOOI644ieT/bP05
3mfkzG4xWE7bSMniMvvCZad4hGCpu+4zUZ7mxRO8N8c9wRNI34sNUBkdKcQxu14e
ub3NATitvNoyuxLes9AwhPVnq4/rMQj44dPztXAN7c2dsTfekHvMDMgVF13e/Onk
zFaCOIkpZCfqEozuK/OTuN11VwKBgQDs1zszMI85Wfjfb8k5gjsruMSWkpJDT7ou
FmAb147KHdAAODiPIoK36XwHrZbbXsl3muRFtBkMhVh7jBEnkdOaZdYLUHuI2dCr
R7tIHSgD74cRqKB3k/czF3tahmJp3Hr4CJpS1lucpbXa2ACrbjjEo7+8FkriRWAf
v2S5dNjFbQKBgQDFVsxAmm80h82Y5Y2hgBRTQuHfQvUmqtL1YuhHXrP4CARXzhsl
EQOO0XZ8H3Ij598IY13rPGmGhS7UGLdF8jADj/uVyJfuC6QMZZJH0N+/nkRBLmM1
YqXiqVMS5mOCyJhsutW0av2UH9lpc9Gqh3hDNoc6T779bcpINC9Y6iRO1wKBgQCr
FUq5TpGXPyvs00ZLWYy+p4iysAwhvXzi/9zLH+oQjHqNPg91Ldu5WFr0/OslahIk
aOoOg+s4RTbGgEaAC/IL7RYyNCAYmicHIxjhHdajCSrLkcDgwCzoZkT//mUmzVKy
yxwXTKr+vCFihXfuXf955EODbaMIUk7+f/YVlZdk/QKBgQDoDgeC4IlsIy051Duv
5xBJ19A+qCEGu2ZF+Zaj8KixfmnS4eXZPNkUetQ65F+YO+kLbBEC12ViMUuPj/AA
h1qDcC2319vsnJUVZlLgM6IOhr6NO00rwJjtpf+J0t+RkIf+8j5uHKMM9loDOu7z
HQb8+A2oLH3tSSPyk1DgNWX8fw==
-----END PRIVATE KEY-----
|};

JsonWebToken.sign(~algorithm=JsonWebToken.RS256, Js.Json.object_(Js.Dict.empty()), key)
|> Js.log;
