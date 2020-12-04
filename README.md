
Instagram Stories Sharing for Cordova
======

*Fork: This fork added a possibility to check if Instagram app is installed for both platform.*
```
IGStory.isInstalled(() => {
    console.log('Instagram is installed');
},
() => {
    console.log('Instagram is not installed');
});
```


This is a simple plugin that allows to share content to Instagram Stories using Facebook's API Documentation: https://developers.facebook.com/docs/instagram/sharing-to-stories/

## Installation

`cordova plugin add https://github.com/gregavola/cordova-plugin-instagram-stories`

## Usage

```
IGStory.shareToStory(
    opts,
    success => {
      console.log(success);
    },
    err => {
      console.error(err);
    }
  );
```

### Options

| optionKey  |  Type  |  Description  |
|---|---|---|
| backgroundImage  | string (Optional) | Fully Qualified URL (not a file:// url, must be a remote url) to be background Image  |
|  stickerImage | string (Optional)   | Fully Qualified URL (not a file:// url, must be a remote url) to be the sticker Image  |
|  attributionURL |  string (Optional) |  A link back to the app when a user clicks it (this is a beta feature and requires approval from Facebook |
|  backgroundTopColor |  string (Optional) |  A hex color to be used when you don't pass a backgroundImage. If you pass both, backgroundImage is used and this is disregarded |
|  backgroundBottomColor |  string (Optional) |  A hex color to be used when you don't pass a backgroundImage. If you pass both, backgroundImage is used and this is disregarded |
