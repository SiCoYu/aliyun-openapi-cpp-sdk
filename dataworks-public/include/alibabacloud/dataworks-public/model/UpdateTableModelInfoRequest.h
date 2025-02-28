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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEMODELINFOREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEMODELINFOREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateTableModelInfoRequest : public RpcServiceRequest {
public:
	UpdateTableModelInfoRequest();
	~UpdateTableModelInfoRequest();
	long getSecondLevelThemeId() const;
	void setSecondLevelThemeId(long secondLevelThemeId);
	std::string getTableGuid() const;
	void setTableGuid(const std::string &tableGuid);
	long getLevelId() const;
	void setLevelId(long levelId);
	int getLevelType() const;
	void setLevelType(int levelType);
	long getFirstLevelThemeId() const;
	void setFirstLevelThemeId(long firstLevelThemeId);

private:
	long secondLevelThemeId_;
	std::string tableGuid_;
	long levelId_;
	int levelType_;
	long firstLevelThemeId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATETABLEMODELINFOREQUEST_H_
