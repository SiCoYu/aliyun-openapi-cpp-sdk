/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/adb/model/DescribeDBClusterForecastRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterForecastRequest;

DescribeDBClusterForecastRequest::DescribeDBClusterForecastRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDBClusterForecast") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterForecastRequest::~DescribeDBClusterForecastRequest() {}

std::string DescribeDBClusterForecastRequest::getMetricType() const {
  return metricType_;
}

void DescribeDBClusterForecastRequest::setMetricType(const std::string &metricType) {
  metricType_ = metricType;
  setParameter(std::string("MetricType"), metricType);
}

std::string DescribeDBClusterForecastRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClusterForecastRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClusterForecastRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBClusterForecastRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBClusterForecastRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBClusterForecastRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

