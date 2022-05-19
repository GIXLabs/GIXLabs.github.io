# GIXLabs.github.io

This repository contains the source material for the GIX Labs site hosted at [gixlabs.github.io](https://gixlabs.github.io).
The site it a [jekyll](https://jekyllrb.com) site using [just-the-docs]() layout and built with the [jekyll action]() on github. 

## Adding to the site

To contribute to the site, first reach out to Kevin or Andreas to get added to the GIXLabs github organization.
You can edit files directly on github. However, it will take about 2 minutes for the changes to show up, so it can be quite time consuming to iterate on changes. 
It's instead recommended to pull the repository down to your computer and run the site on your local computer, then commit and push your changes when you have it the way your want.

### Prerequisites 

To run the site locally, you'll need to install the prerequisites for Jekyll. 
They have a great guide on their [website](). 
Once you have Ruby, RubyGems, GCC and make installed, run `gem install jekyll bundler`.

### Running locally

Once the prerequisites are installed:

- Clone the repo 
  - `git@github.com:GIXLabs/GIXLabs.github.io.git`
  - `cd GIXLabs.github.io`
- Install dependencies `bundle install`
- Serve the site with Jekyll `jekyll serve --config _config_local.yml` 
- Open a browser to `http://localhost:4000/`

You can then make changes to the files in your favorite IDE. It should auto update on each save and you can refresh the page to see your changes. 