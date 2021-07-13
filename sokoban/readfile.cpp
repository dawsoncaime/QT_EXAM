#include "readfile.h"

void addFolderImages(QString path, QStringList &string_list)
{
    //判断路径是否存在
    QDir dir(path);
    if(!dir.exists())
    {
        return;
    }

    QStringList filters;
    filters<<QString("*.txt")<<QString("*.jpg")<<QString("*.png")<<QString("*.tiff")<<QString("*.gif")<<QString("*.bmp");
    dir.setFilter(QDir::Files | QDir::NoSymLinks); //设置类型过滤器，只为文件格式
    dir.setNameFilters(filters);  //设置文件名称过滤器，只为filters格式（后缀为.jpeg等图片格式）

    int dir_count = dir.count();
    if(dir_count <= 0)
    {
        return;
    }

    //获取分隔符
    //QChar separator = QDir::separator();
    QChar separator = QChar('/');
    if(!path.contains(separator))
    {
        separator = QChar('\\');
    }
    QChar last_char = path.at(path.length()-1);
    if(last_char == separator)
    {
        separator = QChar();
    }

    for(uint i=0; i<dir_count; i++)
    {
        QString file_name = dir[i];  //文件名称
        QString file_path = path + separator + file_name;   //文件全路径
        string_list.append(file_path);
    }

    //string_list 添加完成之后，就可以查看list中的文件路径了
}
