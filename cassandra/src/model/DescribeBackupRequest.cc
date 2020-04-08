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

#include <alibabacloud/cassandra/model/DescribeBackupRequest.h>

using AlibabaCloud::Cassandra::Model::DescribeBackupRequest;

DescribeBackupRequest::DescribeBackupRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DescribeBackup")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeBackupRequest::~DescribeBackupRequest()
{}

std::string DescribeBackupRequest::getBackupType()const
{
	return backupType_;
}

void DescribeBackupRequest::setBackupType(const std::string& backupType)
{
	backupType_ = backupType;
	setParameter("BackupType", backupType);
}

std::string DescribeBackupRequest::getBackupId()const
{
	return backupId_;
}

void DescribeBackupRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setParameter("BackupId", backupId);
}

std::string DescribeBackupRequest::getDataCenterId()const
{
	return dataCenterId_;
}

void DescribeBackupRequest::setDataCenterId(const std::string& dataCenterId)
{
	dataCenterId_ = dataCenterId;
	setParameter("DataCenterId", dataCenterId);
}

std::string DescribeBackupRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeBackupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

