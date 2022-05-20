# GIXLabs.github.io

This repository contains the source material for the GIX Labs site hosted at [gixlabs.github.io](https://gixlabs.github.io).
The site it a [jekyll](https://jekyllrb.com) site using [just-the-docs]() layout and hosted with [GitHub Pages]() 

## Adding to the site

To contribute to the site, first reach out to Kevin or Andreas to get added to the GIXLabs github organization.
You can edit files directly on github. However, it will take about 2 minutes for the changes to show up, so it can be quite time consuming to iterate on changes. 
It's instead recommended to pull the repository down to your computer and run the site on your local computer, then commit and push your changes when you have it the way you want.

### Prerequisites 

To run the site locally, you'll need to install the prerequisites for Jekyll. 
They have a great guide on their [website](). 
Once you have Ruby, RubyGems, GCC and Make installed, run `gem install jekyll bundler`.

### Running locally

Once the prerequisites are installed:

- Clone the repo 
  - `git clone git@github.com:GIXLabs/GIXLabs.github.io.git`
  - `cd GIXLabs.github.io`
- Install dependencies `bundle install`
- Serve the site with Jekyll `jekyll serve --config _config_local.yml` 
- Open a browser to `http://localhost:4000/`

You can then make changes to the files in your favorite IDE. 
It should regenerate the site on each save. 
Simply you can refresh the page to see your changes. 

### Project Structure

The root of this directory includes `index.md` which is the main page of the site. 

`about.md` contains information of people working in the labs.

The tools directory contains all the sites for each tool separated into categories. Each category has an `index.md` landing page and then one page for each tool of that type. 

All images and SOPs are stored in the assets folder, which should have a logical structure for file locations based on site navigation. Note: moving images will break links to them, so be aware of where files are linked before moving anything.

### Page Structure

Each page generated with Jekyll starts with front matter. 
This is the metadata written in YAML at the top of the page that tells the site generator where the title, which layout to use, and where that page falls in the navigation tree. 

See [just-the-docs](https://just-the-docs.github.io/just-the-docs/docs/navigation-structure/) documentation on navigation structure ro understand what goes in each page's front matter. 