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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeBackupPolicyResult : public ServiceResult
			{
			public:
				struct DuplicationLocation
				{
					struct Location
					{
						std::string endpoint;
						std::string bucket;
					};
					std::string sotrage;
					Location location;
				};


				DescribeBackupPolicyResult();
				explicit DescribeBackupPolicyResult(const std::string &payload);
				~DescribeBackupPolicyResult();
				std::string getCategory()const;
				std::string getArchiveBackupRetentionPeriod()const;
				std::string getReleasedKeepPolicy()const;
				DuplicationLocation getDuplicationLocation()const;
				std::string getPreferredNextBackupTime()const;
				std::string getArchiveBackupKeepCount()const;
				std::string getPreferredBackupPeriod()const;
				int getLogBackupRetentionPeriod()const;
				int getLogBackupLocalRetentionNumber()const;
				int getSupportReleasedKeep()const;
				int getSupportVolumeShadowCopy()const;
				std::string getDuplicationContent()const;
				std::string getBackupMethod()const;
				std::string getDuplication()const;
				std::string getArchiveBackupKeepPolicy()const;
				std::string getPreferredBackupTime()const;
				int getLocalLogRetentionHours()const;
				std::string getHighSpaceUsageProtection()const;
				std::string getCompressType()const;
				std::string getLogBackupFrequency()const;
				std::string getBackupLog()const;
				std::string getEnableBackupLog()const;
				std::string getLocalLogRetentionSpace()const;
				int getBackupRetentionPeriod()const;
				std::string getBackupInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string category_;
				std::string archiveBackupRetentionPeriod_;
				std::string releasedKeepPolicy_;
				DuplicationLocation duplicationLocation_;
				std::string preferredNextBackupTime_;
				std::string archiveBackupKeepCount_;
				std::string preferredBackupPeriod_;
				int logBackupRetentionPeriod_;
				int logBackupLocalRetentionNumber_;
				int supportReleasedKeep_;
				int supportVolumeShadowCopy_;
				std::string duplicationContent_;
				std::string backupMethod_;
				std::string duplication_;
				std::string archiveBackupKeepPolicy_;
				std::string preferredBackupTime_;
				int localLogRetentionHours_;
				std::string highSpaceUsageProtection_;
				std::string compressType_;
				std::string logBackupFrequency_;
				std::string backupLog_;
				std::string enableBackupLog_;
				std::string localLogRetentionSpace_;
				int backupRetentionPeriod_;
				std::string backupInterval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEBACKUPPOLICYRESULT_H_