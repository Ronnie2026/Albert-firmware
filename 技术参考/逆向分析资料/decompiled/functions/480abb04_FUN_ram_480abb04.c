/* Firmware entry: 0x480abb04 */

void FUN_ram_480abb04(int *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  int *piVar12;
  uint uVar13;
  undefined1 auStack_58 [16];
  int iStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802af5a(param_1,0x7b);
  uVar4 = *(undefined4 *)(param_2 + 4);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480abb3c;
LAB_ram_480abb54:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480abb54;
LAB_ram_480abb3c:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abb54;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"id");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802aa44(&iStack_48,uVar4,10);
  FUN_ram_4802ae48(param_1,&iStack_48);
  FUN_ram_4802a59e(&iStack_48);
  FUN_ram_480ab726(param_1,"buses",*(undefined1 *)(param_2 + 8));
  FUN_ram_480ab726(param_1,&DAT_ram_481caf98,*(undefined1 *)(param_2 + 9));
  FUN_ram_480ab726(param_1,"mode",*(undefined1 *)(param_2 + 0x2a));
  uVar2 = *(undefined2 *)(param_2 + 0x2c);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480abbe6;
LAB_ram_480abbfe:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480abbfe;
LAB_ram_480abbe6:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abbfe;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"period");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802a970(&iStack_48,uVar2,10);
  FUN_ram_4802ae48(param_1,&iStack_48);
  FUN_ram_4802a59e(&iStack_48);
  uVar2 = *(undefined2 *)(param_2 + 0x2e);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480abc56;
LAB_ram_480abc6e:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480abc6e;
LAB_ram_480abc56:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abc6e;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"timeout");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802a970(&iStack_48,uVar2,10);
  FUN_ram_4802ae48(param_1,&iStack_48);
  FUN_ram_4802a59e(&iStack_48);
  cVar3 = *(char *)(param_2 + 0x30);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480abcc6;
LAB_ram_480abcde:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480abcde;
LAB_ram_480abcc6:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abcde;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"strict");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  if (cVar3 == '\0') {
    FUN_ram_4802af2c(param_1,"false");
    cVar3 = *(char *)(param_2 + 0x44);
    if (-1 < *(char *)((int)param_1 + 0xf)) goto LAB_ram_480abd28;
LAB_ram_480ac63c:
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) == 0) goto LAB_ram_480abd48;
LAB_ram_480abd30:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abd48;
  }
  else {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    cVar3 = *(char *)(param_2 + 0x44);
    if (*(char *)((int)param_1 + 0xf) < '\0') goto LAB_ram_480ac63c;
LAB_ram_480abd28:
    if ((*param_1 != 0) && (uVar6 = param_1[2], uVar6 != 0)) goto LAB_ram_480abd30;
LAB_ram_480abd48:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"takeover");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  if (cVar3 == '\0') {
    FUN_ram_4802af2c(param_1,"false");
    uVar4 = *(undefined4 *)(param_2 + 0x48);
    if (-1 < *(char *)((int)param_1 + 0xf)) goto LAB_ram_480abd92;
LAB_ram_480ac612:
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) == 0) goto LAB_ram_480abdb2;
LAB_ram_480abd9a:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abdb2;
  }
  else {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    uVar4 = *(undefined4 *)(param_2 + 0x48);
    if (*(char *)((int)param_1 + 0xf) < '\0') goto LAB_ram_480ac612;
LAB_ram_480abd92:
    if ((*param_1 != 0) && (uVar6 = param_1[2], uVar6 != 0)) goto LAB_ram_480abd9a;
LAB_ram_480abdb2:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"delayUs");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802aa44(&iStack_48,uVar4,10);
  FUN_ram_4802ae48(param_1,&iStack_48);
  FUN_ram_4802a59e(&iStack_48);
  FUN_ram_480ab726(param_1,"priority",*(undefined1 *)(param_2 + 0x4c));
  iStack_48 = *(int *)(param_2 + 4);
  uStack_40 = DAT_ram_482230b0;
  _uStack_44 = CONCAT22((short)((uint)DAT_ram_482230ac >> 0x10),*(undefined2 *)(param_2 + 8));
  uStack_3c = DAT_ram_482230b4;
  uStack_38 = DAT_ram_482230b8;
  uStack_34 = DAT_ram_482230bc;
  cVar3 = *(char *)(param_2 + 0x31);
  cVar1 = *(char *)(param_2 + 0x3a);
  piVar12 = &iStack_48;
  bVar11 = 7;
  if ((iStack_48 != 0x3fd) && (bVar11 = 0, iStack_48 == 0x3c2)) {
    bVar11 = 3;
  }
  piVar7 = &iStack_48;
  cVar10 = '\0';
  pbVar5 = (byte *)(param_2 + 10);
  do {
    bVar9 = pbVar5[0x10];
    if ((((cVar3 != '\0') && (*(char *)(param_2 + 0x32) == cVar10)) &&
        (uVar6 = (uint)*(byte *)(param_2 + 0x34), (uVar6 - 1 & 0xff) < 8)) &&
       (*(byte *)(param_2 + 0x33) + uVar6 < 9)) {
      uVar13 = 0xff;
      if (uVar6 != 8) {
        uVar13 = (1 << (uVar6 & 0x1f)) - 1U & 0xffff;
      }
      bVar9 = bVar9 | (byte)(uVar13 << (*(byte *)(param_2 + 0x33) & 0x1f));
    }
    if ((cVar1 == '\0') || (*(char *)(param_2 + 0x3c) != cVar10)) {
      bVar11 = *pbVar5 & bVar11 & ~bVar9;
    }
    else {
      bVar11 = 0;
    }
    bVar9 = pbVar5[8];
    cVar10 = cVar10 + '\x01';
    *(byte *)((int)piVar7 + 6) = bVar11;
    *(byte *)((int)piVar7 + 0xe) = bVar9 & bVar11;
    pbVar5 = pbVar5 + 1;
    piVar7 = (int *)((int)piVar7 + 1);
    bVar11 = 0;
  } while (cVar10 != '\b');
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480abf06;
LAB_ram_480abf1e:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480abf1e;
LAB_ram_480abf06:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abf1e;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"takeoverMask");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(param_1,0x22);
  piVar7 = &iStack_48;
  cVar3 = '\0';
  while( true ) {
    bVar11 = *(byte *)((int)piVar7 + 6);
    cVar3 = cVar3 + '\x01';
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[bVar11 >> 4]);
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[bVar11 & 0xf]);
    piVar7 = (int *)((int)piVar7 + 1);
    if (cVar3 == '\b') break;
    FUN_ram_4802af5a(param_1,0x20);
  }
  FUN_ram_4802af5a(param_1,0x22);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480abfb8;
LAB_ram_480abfd0:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480abfd0;
LAB_ram_480abfb8:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480abfd0;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"takeoverValue");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(param_1,0x22);
  cVar3 = '\0';
  while( true ) {
    bVar11 = *(byte *)((int)piVar12 + 0xe);
    cVar3 = cVar3 + '\x01';
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[bVar11 >> 4]);
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[bVar11 & 0xf]);
    piVar12 = (int *)((int)piVar12 + 1);
    if (cVar3 == '\b') break;
    FUN_ram_4802af5a(param_1,0x20);
  }
  FUN_ram_4802af5a(param_1,0x22);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ac05e;
LAB_ram_480ac076:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480ac076;
LAB_ram_480ac05e:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac076;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"matchMask");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(param_1,0x22);
  cVar3 = '\0';
  pbVar5 = (byte *)(param_2 + 10);
  while( true ) {
    cVar3 = cVar3 + '\x01';
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 >> 4]);
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 & 0xf]);
    if (cVar3 == '\b') break;
    FUN_ram_4802af5a(param_1,0x20);
    pbVar5 = pbVar5 + 1;
  }
  FUN_ram_4802af5a(param_1,0x22);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ac104;
LAB_ram_480ac11c:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480ac11c;
LAB_ram_480ac104:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac11c;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"matchValue");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(param_1,0x22);
  cVar3 = '\0';
  pbVar5 = (byte *)(param_2 + 0x12);
  while( true ) {
    cVar3 = cVar3 + '\x01';
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 >> 4]);
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 & 0xf]);
    if (cVar3 == '\b') break;
    FUN_ram_4802af5a(param_1,0x20);
    pbVar5 = pbVar5 + 1;
  }
  FUN_ram_4802af5a(param_1,0x22);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ac1ae;
LAB_ram_480ac1c6:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480ac1c6;
LAB_ram_480ac1ae:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac1c6;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"editMask");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(param_1,0x22);
  cVar3 = '\0';
  pbVar5 = (byte *)(param_2 + 0x1a);
  while( true ) {
    cVar3 = cVar3 + '\x01';
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 >> 4]);
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 & 0xf]);
    if (cVar3 == '\b') break;
    FUN_ram_4802af5a(param_1,0x20);
    pbVar5 = pbVar5 + 1;
  }
  FUN_ram_4802af5a(param_1,0x22);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ac258;
LAB_ram_480ac270:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480ac270;
LAB_ram_480ac258:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac270;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"editValue");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802af5a(param_1,0x22);
  cVar3 = '\0';
  pbVar5 = (byte *)(param_2 + 0x22);
  while( true ) {
    cVar3 = cVar3 + '\x01';
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 >> 4]);
    FUN_ram_4802af5a(param_1,"0123456789ABCDEF"[*pbVar5 & 0xf]);
    if (cVar3 == '\b') break;
    FUN_ram_4802af5a(param_1,0x20);
    pbVar5 = pbVar5 + 1;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_480ab726(param_1,"counterMode",*(undefined1 *)(param_2 + 0x31));
  FUN_ram_480ab726(param_1,"counterByte",*(undefined1 *)(param_2 + 0x32));
  FUN_ram_480ab726(param_1,"counterBit",*(undefined1 *)(param_2 + 0x33));
  FUN_ram_480ab726(param_1,"counterWidth",*(undefined1 *)(param_2 + 0x34));
  FUN_ram_480ab726(param_1,"counterStep",*(undefined1 *)(param_2 + 0x35));
  FUN_ram_480ab726(param_1,"counterInitial",*(undefined1 *)(param_2 + 0x36));
  FUN_ram_480ab726(param_1,"counterMin",*(undefined1 *)(param_2 + 0x37));
  FUN_ram_480ab726(param_1,"counterMax",*(undefined1 *)(param_2 + 0x38));
  cVar3 = *(char *)(param_2 + 0x39);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ac396;
LAB_ram_480ac3ae:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480ac3ae;
LAB_ram_480ac396:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac3ae;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"counterOffset");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  FUN_ram_4802a970(auStack_58,(int)cVar3,10);
  FUN_ram_4802ae48(param_1,auStack_58);
  FUN_ram_4802a59e(auStack_58);
  FUN_ram_480ab726(param_1,"checksumMode",*(undefined1 *)(param_2 + 0x3a));
  FUN_ram_480ab726(param_1,"checksumBytes",*(undefined1 *)(param_2 + 0x3b));
  FUN_ram_480ab726(param_1,"checksumOutput",*(undefined1 *)(param_2 + 0x3c));
  FUN_ram_480ab726(param_1,"checksumAdd",*(undefined1 *)(param_2 + 0x3d));
  FUN_ram_480ab726(param_1,"crcPoly",*(undefined1 *)(param_2 + 0x3e));
  FUN_ram_480ab726(param_1,"crcInitial",*(undefined1 *)(param_2 + 0x3f));
  FUN_ram_480ab726(param_1,"checksumXor",*(undefined1 *)(param_2 + 0x40));
  cVar3 = *(char *)(param_2 + 0x41);
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) goto LAB_ram_480ac484;
LAB_ram_480ac49c:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  else {
    if ((*param_1 == 0) || (uVar6 = param_1[2], uVar6 == 0)) goto LAB_ram_480ac49c;
LAB_ram_480ac484:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac49c;
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"crcRefIn");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  if (cVar3 == '\0') {
    FUN_ram_4802af2c(param_1,"false");
    cVar3 = *(char *)(param_2 + 0x42);
    if (-1 < *(char *)((int)param_1 + 0xf)) goto LAB_ram_480ac4e6;
LAB_ram_480ac666:
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) == 0) goto LAB_ram_480ac506;
LAB_ram_480ac4ee:
    pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
    if ((*pbVar5 & 0xdf) != 0x5b) goto LAB_ram_480ac506;
  }
  else {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    cVar3 = *(char *)(param_2 + 0x42);
    if (*(char *)((int)param_1 + 0xf) < '\0') goto LAB_ram_480ac666;
LAB_ram_480ac4e6:
    if ((*param_1 != 0) && (uVar6 = param_1[2], uVar6 != 0)) goto LAB_ram_480ac4ee;
LAB_ram_480ac506:
    FUN_ram_4802af5a(param_1,0x2c);
  }
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"crcRefOut");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  if (cVar3 == '\0') {
    FUN_ram_4802af2c(param_1,"false");
    cVar3 = *(char *)(param_2 + 0x43);
    if (-1 < *(char *)((int)param_1 + 0xf)) goto LAB_ram_480ac54e;
LAB_ram_480ac5ec:
    uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
    if ((*(byte *)((int)param_1 + 0xf) & 0x7f) != 0) {
LAB_ram_480ac556:
      pbVar5 = (byte *)FUN_ram_4802b206(param_1,uVar6 - 1);
      if ((*pbVar5 & 0xdf) == 0x5b) goto LAB_ram_480ac578;
    }
  }
  else {
    FUN_ram_4802af2c(param_1,&DAT_ram_481c3dec);
    cVar3 = *(char *)(param_2 + 0x43);
    if (*(char *)((int)param_1 + 0xf) < '\0') goto LAB_ram_480ac5ec;
LAB_ram_480ac54e:
    if ((*param_1 != 0) && (uVar6 = param_1[2], uVar6 != 0)) goto LAB_ram_480ac556;
  }
  FUN_ram_4802af5a(param_1,0x2c);
LAB_ram_480ac578:
  FUN_ram_4802af5a(param_1,0x22);
  FUN_ram_4802af2c(param_1,"crcIncludeId");
  FUN_ram_4802af2c(param_1,&DAT_ram_481c67c4);
  if (cVar3 == '\0') {
    pcVar8 = "false";
  }
  else {
    pcVar8 = "true";
  }
  FUN_ram_4802af2c(param_1,pcVar8);
  FUN_ram_4802af5a(param_1,0x7d);
  return;
}


