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

#include <alibabacloud/ens/model/DescribeLoadBalancerTCPListenerAttributeRequest.h>

using AlibabaCloud::Ens::Model::DescribeLoadBalancerTCPListenerAttributeRequest;

DescribeLoadBalancerTCPListenerAttributeRequest::DescribeLoadBalancerTCPListenerAttributeRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeLoadBalancerTCPListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoadBalancerTCPListenerAttributeRequest::~DescribeLoadBalancerTCPListenerAttributeRequest() {}

std::string DescribeLoadBalancerTCPListenerAttributeRequest::getProtocol() const {
  return protocol_;
}

void DescribeLoadBalancerTCPListenerAttributeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

int DescribeLoadBalancerTCPListenerAttributeRequest::getListenerPort() const {
  return listenerPort_;
}

void DescribeLoadBalancerTCPListenerAttributeRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DescribeLoadBalancerTCPListenerAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeLoadBalancerTCPListenerAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

