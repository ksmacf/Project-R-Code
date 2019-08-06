allPackages <- installed.packages()[, 1]
findBrokenPackages <- function(packages) {
  for (p in packages) {
    tryCatch(ncol(asNamespace(p)$.__NAMESPACE__.$S3methods),
             error = function(e) print(c(p, e)))
  }
}
findBrokenPackages(allPackages)
