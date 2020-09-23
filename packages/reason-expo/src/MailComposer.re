type composeAsyncOptions;
[@bs.obj]
external composeAsyncOptions:
  (
    ~recipients: array(string),
    ~ccRecipients: array(string),
    ~bccRecipients: array(string),
    ~subject: string,
    ~body: string,
    ~isHtml: bool,
    ~attachments: array(string)
  ) =>
  composeAsyncOptions;

type composeAsyncResult = {status: string};

[@bs.module "expo-mail-composer"]
external composeAsync: composeAsyncOptions => Js.Promise.t(composeAsyncResult) =
  "composeAsync";
