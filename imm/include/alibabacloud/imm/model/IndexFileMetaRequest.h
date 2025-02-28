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

#ifndef ALIBABACLOUD_IMM_MODEL_INDEXFILEMETAREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_INDEXFILEMETAREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT IndexFileMetaRequest : public RpcServiceRequest {
public:
	struct File {
		std::map<std::string, std::string> customLabels;
		struct FiguresItem {
			std::string figureId;
			std::string figureClusterId;
			std::string figureType;
		};
		FiguresItem figuresItem;
		std::vector<FiguresItem> figures;
		std::string oSSURI;
		std::string fileHash;
		std::string uRI;
		std::string customId;
		std::string mediaType;
		std::string contentType;
	};
	IndexFileMetaRequest();
	~IndexFileMetaRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	File getFile() const;
	void setFile(const File &file);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getNotifyEndpoint() const;
	void setNotifyEndpoint(const std::string &notifyEndpoint);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);

private:
	std::string projectName_;
	File file_;
	std::string notifyTopicName_;
	std::string notifyEndpoint_;
	std::string datasetName_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_INDEXFILEMETAREQUEST_H_
