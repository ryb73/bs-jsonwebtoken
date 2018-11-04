type algorithm =
    HS256 | HS384 | HS512 | RS256 | RS384 | RS512 |
    ES256 | ES384 | ES512 | NoSignature;
let _algorithmToString = fun
    | HS256 => "HS256"
    | HS384 => "HS384"
    | HS512 => "HS512"
    | RS256 => "RS256"
    | RS384 => "RS384"
    | RS512 => "RS512"
    | ES256 => "ES256"
    | ES384 => "ES384"
    | ES512 => "ES512"
    | NoSignature => "none";

type _options;
[@bs.obj] external _options : (~algorithm: string=?) => _options = "";
[@bs.module "jsonwebtoken"] external _sign : Js.Json.t => string => _options => string = "sign";

let sign = (~algorithm=?, payload, secretOrPrivateKey) =>
    _sign(payload, secretOrPrivateKey,
        _options(~algorithm=?Belt.Option.map(algorithm, _algorithmToString))
    );