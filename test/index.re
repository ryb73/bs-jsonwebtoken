JsonWebToken.sign(~algorithm=JsonWebToken.RS256, Js.Json.object_(Js.Dict.empty()), "secret")
|> Js.log;