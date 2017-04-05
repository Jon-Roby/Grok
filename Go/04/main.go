package main

import (
  "log"
  "os"
  "text/template"
)

var tpl *template.Template

type band struct {
  Name    string
  Country string
}

func init() {
  tpl = template.Must(template.ParseFiles("tpl2.gohtml"))
}

func main() {
  // ***** Slice *****
  // bands := []string{"Rolling Stones", "Led Zeppelin", "Pink Floyd"}
  //
  // err := tpl.Execute(os.Stdout, bands)
  // if err != nil {
  //   log.Fatalln(err)
  // }

  // ***** Map *****
  // bands := map[string]string{
  //   "England": "Led Zeppelin",
  //   "America": "Rolling Stones",
  // }
  //
  // err := tpl.Execute(os.Stdout, bands)
  // if err != nil {
  //   log.Fatalln(err)
  // }

  // ***** Struct *****
  ledzeppelin := band{
    Name: "Led Zeppelin",
    Country: "England",
  }

  rollingstones := band{
    Name: "Rolling Stones",
    Country: "America",
  }

  bands := []band{ledzeppelin, rollingstones}

  err := tpl.Execute(os.Stdout, bands)
  if err != nil {
    log.Fatalln(err)
  }

}
