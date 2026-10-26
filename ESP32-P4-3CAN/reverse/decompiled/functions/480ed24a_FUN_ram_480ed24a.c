/* Firmware entry: 0x480ed24a */

uint FUN_ram_480ed24a(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  void *pvVar11;
  byte *pbVar12;
  byte bStack_152;
  char acStack_151 [5];
  undefined1 auStack_14c [100];
  undefined1 auStack_e8 [100];
  undefined1 auStack_84 [100];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_2 - 1 & 0xff) < 4) {
    pbVar9 = param_2;
    do {
      if (0x7ff < *(uint *)(pbVar9 + 8)) {
        return 0x300;
      }
      bVar1 = pbVar9[0xc];
      pbVar9 = pbVar9 + 0x50;
      if ((bVar1 & 7) == 0) {
        return (bVar1 & 7) << 0x10 | 0x200;
      }
      if (7 < bVar1) {
        return 0x200;
      }
    } while (pbVar9 != param_2 + (uint)*param_2 * 0x50);
    FUN_ram_4ff3ec14(param_1,0xffffffff);
    cVar2 = *(char *)(param_1 + 0x128c);
    FUN_ram_4ff3ee10(param_1);
    if ((byte)(cVar2 - 3U) < 2) {
      uVar4 = 0;
      iVar10 = 0x10;
      uVar3 = 0;
    }
    else {
      bStack_152 = 0;
      memset(auStack_14c,0,300);
      if (*param_2 != 0) {
        pbVar9 = param_2 + 8;
        pbVar12 = pbVar9 + (uint)*param_2 * 0x50;
        do {
          bVar1 = pbVar9[4];
          uVar3 = bVar1 & 1;
          if (((bVar1 & 1) != 0) &&
             (iVar10 = FUN_ram_4804f284(auStack_14c,*(undefined4 *)pbVar9), iVar10 == 0)) {
LAB_ram_480ed3cc:
            uVar4 = 0;
            iVar10 = 0xe;
            goto LAB_ram_480ed2ea;
          }
          if (((bVar1 & 2) != 0) &&
             (iVar10 = FUN_ram_4804f284(auStack_e8,*(undefined4 *)pbVar9), iVar10 == 0)) {
            uVar3 = 2;
            goto LAB_ram_480ed3cc;
          }
          if (((bVar1 & 4) != 0) &&
             (iVar10 = FUN_ram_4804f284(auStack_84,*(undefined4 *)pbVar9), iVar10 == 0)) {
            uVar3 = 4;
            goto LAB_ram_480ed3cc;
          }
          pbVar9 = pbVar9 + 0x50;
        } while (pbVar9 != pbVar12);
      }
      acStack_151[0] = '\0';
      iVar10 = FUN_ram_480ea70a(param_3,auStack_14c,&bStack_152,acStack_151);
      if (iVar10 == 0) {
        iVar10 = 0x15;
        if (((acStack_151[0] != '\x02') && (iVar10 = 0x16, acStack_151[0] != '\x03')) &&
           (iVar10 = 0xe, acStack_151[0] != '\x01')) {
          iVar10 = 0x17;
        }
        uVar3 = (uint)bStack_152;
        uVar4 = 0;
      }
      else {
        FUN_ram_4ff3ec14(param_1,0xffffffff);
        pbVar9 = param_2 + 0x140;
        puVar8 = (undefined4 *)(param_1 + 0xc);
        do {
          uVar5 = *(undefined4 *)(param_2 + 4);
          uVar6 = *(undefined4 *)(param_2 + 8);
          uVar7 = *(undefined4 *)(param_2 + 0xc);
          *puVar8 = *(undefined4 *)param_2;
          puVar8[1] = uVar5;
          puVar8[2] = uVar6;
          puVar8[3] = uVar7;
          param_2 = param_2 + 0x10;
          puVar8 = puVar8 + 4;
        } while (param_2 != pbVar9);
        pvVar11 = (void *)(param_1 + 0x162);
        *puVar8 = *(undefined4 *)param_2;
        *(undefined4 *)(param_1 + 0x150) = 0;
        *(undefined1 *)(param_1 + 0x154) = 0;
        do {
          *(undefined1 *)((int)pvVar11 + -10) = 1;
          *(undefined4 *)((int)pvVar11 + -6) = 0;
          *(undefined2 *)((int)pvVar11 + -2) = 0;
          pvVar11 = memset(pvVar11,0,0x20);
          *(undefined1 *)((int)pvVar11 + 0x20) = 0;
          *(undefined4 *)((int)pvVar11 + 0x22) = 100;
          *(undefined1 *)((int)pvVar11 + 0x26) = 0;
          *(undefined1 *)((int)pvVar11 + 0x3a) = 0;
          *(undefined4 *)((int)pvVar11 + 0x3e) = 0;
          *(undefined1 *)((int)pvVar11 + 0x42) = 0xff;
          *(undefined1 *)((int)pvVar11 + 0x27) = 0;
          *(undefined1 *)((int)pvVar11 + 0x28) = 0;
          *(undefined1 *)((int)pvVar11 + 0x29) = 0;
          *(undefined1 *)((int)pvVar11 + 0x2a) = 0;
          *(undefined1 *)((int)pvVar11 + 0x2b) = 1;
          *(undefined1 *)((int)pvVar11 + 0x2c) = 0;
          *(undefined1 *)((int)pvVar11 + 0x2d) = 0;
          *(undefined1 *)((int)pvVar11 + 0x2e) = 0xff;
          *(undefined1 *)((int)pvVar11 + 0x2f) = 0;
          *(undefined1 *)((int)pvVar11 + 0x30) = 0;
          *(undefined1 *)((int)pvVar11 + 0x31) = 0;
          *(undefined1 *)((int)pvVar11 + 0x32) = 0;
          *(undefined1 *)((int)pvVar11 + 0x33) = 0;
          *(undefined1 *)((int)pvVar11 + 0x34) = 0x1d;
          *(undefined1 *)((int)pvVar11 + 0x35) = 0xff;
          *(undefined1 *)((int)pvVar11 + 0x36) = 0;
          *(undefined1 *)((int)pvVar11 + 0x37) = 0;
          *(undefined1 *)((int)pvVar11 + 0x38) = 0;
          *(undefined1 *)((int)pvVar11 + 0x39) = 0;
          pvVar11 = (void *)((int)pvVar11 + 0x50);
        } while (pvVar11 != (void *)(param_1 + 0x2a2));
        memset((void *)(param_1 + 0x298),0,0x480);
        *(undefined1 *)(param_1 + 0x1288) = 0;
        *(undefined1 *)(param_1 + 0x1289) = 0;
        *(undefined1 *)(param_1 + 0x128a) = 0;
        *(undefined1 *)(param_1 + 0x128b) = 0;
        *(undefined2 *)(param_1 + 0x128c) = 1;
        *(undefined1 *)(param_1 + 0x1298) = 0;
        FUN_ram_4ff3ee10(param_1);
        uVar4 = 1;
        iVar10 = 0;
        uVar3 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
    iVar10 = 1;
    uVar3 = 0;
  }
LAB_ram_480ed2ea:
  return uVar4 | iVar10 << 8 | uVar3 << 0x10;
}


