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

#ifndef ALIBABACLOUD_IMM_MODEL_CONVERTOFFICEFORMATREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_CONVERTOFFICEFORMATREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT ConvertOfficeFormatRequest : public RpcServiceRequest {
public:
	ConvertOfficeFormatRequest();
	~ConvertOfficeFormatRequest();
	std::string getSrcType() const;
	void setSrcType(const std::string &srcType);
	std::string getProject() const;
	void setProject(const std::string &project);
	bool getPdfVector() const;
	void setPdfVector(bool pdfVector);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	long getStartPage() const;
	void setStartPage(long startPage);
	bool getFitToPagesWide() const;
	void setFitToPagesWide(bool fitToPagesWide);
	std::string getTgtFilePrefix() const;
	void setTgtFilePrefix(const std::string &tgtFilePrefix);
	std::string getModelId() const;
	void setModelId(const std::string &modelId);
	long getMaxSheetRow() const;
	void setMaxSheetRow(long maxSheetRow);
	long getMaxSheetCount() const;
	void setMaxSheetCount(long maxSheetCount);
	long getEndPage() const;
	void setEndPage(long endPage);
	std::string getTgtFileSuffix() const;
	void setTgtFileSuffix(const std::string &tgtFileSuffix);
	bool getSheetOnePage() const;
	void setSheetOnePage(bool sheetOnePage);
	long getMaxSheetCol() const;
	void setMaxSheetCol(long maxSheetCol);
	std::string getTgtType() const;
	void setTgtType(const std::string &tgtType);
	bool getHidecomments() const;
	void setHidecomments(bool hidecomments);
	bool getFitToPagesTall() const;
	void setFitToPagesTall(bool fitToPagesTall);
	std::string getSrcUri() const;
	void setSrcUri(const std::string &srcUri);
	std::string getTgtFilePages() const;
	void setTgtFilePages(const std::string &tgtFilePages);
	std::string getTgtUri() const;
	void setTgtUri(const std::string &tgtUri);

private:
	std::string srcType_;
	std::string project_;
	bool pdfVector_;
	std::string accessKeyId_;
	std::string password_;
	long startPage_;
	bool fitToPagesWide_;
	std::string tgtFilePrefix_;
	std::string modelId_;
	long maxSheetRow_;
	long maxSheetCount_;
	long endPage_;
	std::string tgtFileSuffix_;
	bool sheetOnePage_;
	long maxSheetCol_;
	std::string tgtType_;
	bool hidecomments_;
	bool fitToPagesTall_;
	std::string srcUri_;
	std::string tgtFilePages_;
	std::string tgtUri_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_CONVERTOFFICEFORMATREQUEST_H_
