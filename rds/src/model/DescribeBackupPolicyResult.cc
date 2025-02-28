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

#include <alibabacloud/rds/model/DescribeBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeBackupPolicyResult::DescribeBackupPolicyResult() :
	ServiceResult()
{}

DescribeBackupPolicyResult::DescribeBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPolicyResult::~DescribeBackupPolicyResult()
{}

void DescribeBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto duplicationLocationNode = value["DuplicationLocation"];
	if(!duplicationLocationNode["Sotrage"].isNull())
		duplicationLocation_.sotrage = duplicationLocationNode["Sotrage"].asString();
	auto locationNode = duplicationLocationNode["Location"];
	if(!locationNode["Bucket"].isNull())
		duplicationLocation_.location.bucket = locationNode["Bucket"].asString();
	if(!locationNode["Endpoint"].isNull())
		duplicationLocation_.location.endpoint = locationNode["Endpoint"].asString();
	if(!value["LogBackupRetentionPeriod"].isNull())
		logBackupRetentionPeriod_ = std::stoi(value["LogBackupRetentionPeriod"].asString());
	if(!value["ArchiveBackupKeepPolicy"].isNull())
		archiveBackupKeepPolicy_ = value["ArchiveBackupKeepPolicy"].asString();
	if(!value["ArchiveBackupKeepCount"].isNull())
		archiveBackupKeepCount_ = value["ArchiveBackupKeepCount"].asString();
	if(!value["LocalLogRetentionHours"].isNull())
		localLogRetentionHours_ = std::stoi(value["LocalLogRetentionHours"].asString());
	if(!value["BackupRetentionPeriod"].isNull())
		backupRetentionPeriod_ = std::stoi(value["BackupRetentionPeriod"].asString());
	if(!value["PreferredBackupPeriod"].isNull())
		preferredBackupPeriod_ = value["PreferredBackupPeriod"].asString();
	if(!value["CompressType"].isNull())
		compressType_ = value["CompressType"].asString();
	if(!value["SupportReleasedKeep"].isNull())
		supportReleasedKeep_ = std::stoi(value["SupportReleasedKeep"].asString());
	if(!value["LocalLogRetentionSpace"].isNull())
		localLogRetentionSpace_ = value["LocalLogRetentionSpace"].asString();
	if(!value["SupportVolumeShadowCopy"].isNull())
		supportVolumeShadowCopy_ = std::stoi(value["SupportVolumeShadowCopy"].asString());
	if(!value["BackupMethod"].isNull())
		backupMethod_ = value["BackupMethod"].asString();
	if(!value["LogBackupFrequency"].isNull())
		logBackupFrequency_ = value["LogBackupFrequency"].asString();
	if(!value["PreferredNextBackupTime"].isNull())
		preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();
	if(!value["HighSpaceUsageProtection"].isNull())
		highSpaceUsageProtection_ = value["HighSpaceUsageProtection"].asString();
	if(!value["DuplicationContent"].isNull())
		duplicationContent_ = value["DuplicationContent"].asString();
	if(!value["ArchiveBackupRetentionPeriod"].isNull())
		archiveBackupRetentionPeriod_ = value["ArchiveBackupRetentionPeriod"].asString();
	if(!value["BackupInterval"].isNull())
		backupInterval_ = value["BackupInterval"].asString();
	if(!value["ReleasedKeepPolicy"].isNull())
		releasedKeepPolicy_ = value["ReleasedKeepPolicy"].asString();
	if(!value["PreferredBackupTime"].isNull())
		preferredBackupTime_ = value["PreferredBackupTime"].asString();
	if(!value["Duplication"].isNull())
		duplication_ = value["Duplication"].asString();
	if(!value["LogBackupLocalRetentionNumber"].isNull())
		logBackupLocalRetentionNumber_ = std::stoi(value["LogBackupLocalRetentionNumber"].asString());
	if(!value["Category"].isNull())
		category_ = value["Category"].asString();
	if(!value["EnableBackupLog"].isNull())
		enableBackupLog_ = value["EnableBackupLog"].asString();
	if(!value["BackupLog"].isNull())
		backupLog_ = value["BackupLog"].asString();

}

std::string DescribeBackupPolicyResult::getCategory()const
{
	return category_;
}

std::string DescribeBackupPolicyResult::getArchiveBackupRetentionPeriod()const
{
	return archiveBackupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getReleasedKeepPolicy()const
{
	return releasedKeepPolicy_;
}

DescribeBackupPolicyResult::DuplicationLocation DescribeBackupPolicyResult::getDuplicationLocation()const
{
	return duplicationLocation_;
}

std::string DescribeBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

std::string DescribeBackupPolicyResult::getArchiveBackupKeepCount()const
{
	return archiveBackupKeepCount_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

int DescribeBackupPolicyResult::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

int DescribeBackupPolicyResult::getLogBackupLocalRetentionNumber()const
{
	return logBackupLocalRetentionNumber_;
}

int DescribeBackupPolicyResult::getSupportReleasedKeep()const
{
	return supportReleasedKeep_;
}

int DescribeBackupPolicyResult::getSupportVolumeShadowCopy()const
{
	return supportVolumeShadowCopy_;
}

std::string DescribeBackupPolicyResult::getDuplicationContent()const
{
	return duplicationContent_;
}

std::string DescribeBackupPolicyResult::getBackupMethod()const
{
	return backupMethod_;
}

std::string DescribeBackupPolicyResult::getDuplication()const
{
	return duplication_;
}

std::string DescribeBackupPolicyResult::getArchiveBackupKeepPolicy()const
{
	return archiveBackupKeepPolicy_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

int DescribeBackupPolicyResult::getLocalLogRetentionHours()const
{
	return localLogRetentionHours_;
}

std::string DescribeBackupPolicyResult::getHighSpaceUsageProtection()const
{
	return highSpaceUsageProtection_;
}

std::string DescribeBackupPolicyResult::getCompressType()const
{
	return compressType_;
}

std::string DescribeBackupPolicyResult::getLogBackupFrequency()const
{
	return logBackupFrequency_;
}

std::string DescribeBackupPolicyResult::getBackupLog()const
{
	return backupLog_;
}

std::string DescribeBackupPolicyResult::getEnableBackupLog()const
{
	return enableBackupLog_;
}

std::string DescribeBackupPolicyResult::getLocalLogRetentionSpace()const
{
	return localLogRetentionSpace_;
}

int DescribeBackupPolicyResult::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getBackupInterval()const
{
	return backupInterval_;
}

