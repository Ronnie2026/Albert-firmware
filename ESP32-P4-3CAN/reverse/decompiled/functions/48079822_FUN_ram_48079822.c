/* Firmware entry: 0x48079822 */

undefined4 FUN_ram_48079822(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  char *__s;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte local_74 [16];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  byte abStack_44 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  abStack_44[0] = 0;
  iVar5 = FUN_ram_48129c8a();
  iVar6 = FUN_ram_48129ce8();
  if ((((iVar6 != 0) && (__s = *(char **)(iVar5 + 0x10), __s != (char *)0x0)) &&
      (sVar7 = strlen(__s), sVar7 < 0x21)) &&
     (pbVar8 = (byte *)FUN_ram_4ff45158(&uStack_64,__s,sVar7 + 1), sVar7 == 0x20)) {
    pbVar11 = pbVar8;
    do {
      bVar10 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      if ((9 < (byte)(bVar10 - 0x30)) && (5 < (byte)(bVar10 + 0x9f))) {
        return 0;
      }
    } while (abStack_44 != pbVar11);
    local_74[0] = 0;
    local_74[1] = 0;
    local_74[2] = 0;
    local_74[3] = 0;
    local_74[4] = 0;
    local_74[5] = 0;
    local_74[6] = 0;
    local_74[7] = 0;
    local_74[8] = 0;
    local_74[9] = 0;
    local_74[10] = 0;
    local_74[0xb] = 0;
    local_74[0xc] = 0;
    local_74[0xd] = 0;
    local_74[0xe] = 0;
    local_74[0xf] = 0;
    uVar12 = 0;
    pbVar11 = pbVar8;
    do {
      uVar9 = (uint)*pbVar11;
      uVar13 = uVar9 - 0x30;
      if (9 < (uVar13 & 0xff)) {
        if ((uVar9 - 0x61 & 0xff) < 6) {
          uVar13 = uVar9 - 0x57;
        }
        else {
          if (5 < (uVar9 - 0x41 & 0xff)) {
            return 0;
          }
          uVar13 = uVar9 - 0x37;
        }
      }
      uVar9 = uVar12 >> 1;
      uVar14 = ~uVar12;
      uVar12 = uVar12 + 1;
      local_74[uVar9] = (byte)(uVar13 << ((uVar14 & 1) << 2)) | local_74[uVar9];
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0x20);
    pbVar11 = local_74;
    bVar10 = 0;
    do {
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar10 = bVar10 | bVar1;
    } while (pbVar8 != pbVar11);
    if (bVar10 != 0) {
      FUN_ram_4ff45158(param_4,local_74,0x10);
      iVar5 = FUN_ram_48129c8a(param_1,param_3);
      iVar6 = FUN_ram_48129cd6();
      uVar3 = DAT_ram_481f4cbc;
      uVar2 = DAT_ram_481f4cb8;
      if (iVar6 != 0) {
        uVar12 = *(uint *)(iVar5 + 0x1c);
        uVar4 = *(undefined4 *)(iVar5 + 0x18);
        iVar5 = __unorddf2(uVar4,uVar12 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
        if (((iVar5 == 0) && (iVar5 = __gtdf2(uVar4,uVar12 & 0x7fffffff,uVar2,uVar3), iVar5 < 1)) &&
           ((iVar5 = __ltdf2(uVar4,uVar12,0,0), -1 < iVar5 &&
            (iVar5 = __gtdf2(uVar4,uVar12,DAT_ram_481f4ce0,DAT_ram_481f4ce4), iVar5 < 1)))) {
          uVar15 = FUN_ram_48196062(uVar4,uVar12);
          iVar5 = __nedf2(uVar4,uVar12,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          if (iVar5 == 0) {
            lVar16 = FUN_ram_48195bce(uVar4,uVar12);
            if (lVar16 != 0) {
              *(int *)(param_4 + 0x10) = (int)lVar16;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


