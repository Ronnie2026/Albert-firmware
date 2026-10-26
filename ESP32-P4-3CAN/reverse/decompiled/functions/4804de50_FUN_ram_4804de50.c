/* Firmware entry: 0x4804de50 */

undefined4
FUN_ram_4804de50(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6,undefined1 *param_7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *apbStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    pbVar11 = param_1;
    while (bVar1 != 0) {
      iVar3 = isspace((uint)bVar1);
      pbVar11 = pbVar11 + 1;
      if (iVar3 == 0) {
        apbStack_44[0] = (byte *)0x0;
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        *puVar4 = 0;
        uVar12 = FUN_ram_4819723c(param_1,apbStack_44);
        uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
        uVar7 = (undefined4)uVar12;
        if (param_1 == apbStack_44[0]) {
          uVar9 = 2;
        }
        else {
          piVar5 = (int *)FUN_ram_4819bf88();
          if (*piVar5 != 0x22) {
            iVar3 = __unorddf2(uVar7,uVar8 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
            if ((iVar3 != 0) ||
               (iVar3 = __gtdf2(uVar7,uVar8 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
               0 < iVar3)) {
              *param_7 = 4;
              return 0;
            }
            bVar1 = *apbStack_44[0];
            goto joined_r0x4804df22;
          }
          uVar9 = 3;
        }
        *param_7 = uVar9;
        return 0;
      }
      bVar1 = *pbVar11;
    }
  }
  *param_7 = 1;
  return 0;
joined_r0x4804df22:
  if (bVar1 == 0) {
    iVar3 = __gtdf2(param_2,param_3,uVar7,uVar8);
    if ((iVar3 < 1) && (iVar3 = __ltdf2(param_4,param_5,uVar7,uVar8), -1 < iVar3)) {
      uVar12 = __muldf3(uVar7,uVar8,DAT_ram_481f4cd8,DAT_ram_481f4cdc);
      uVar2 = DAT_ram_481f4cbc;
      uVar7 = DAT_ram_481f4cb8;
      uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
      uVar6 = (undefined4)uVar12;
      uVar10 = uVar8 & 0x7fffffff;
      iVar3 = __unorddf2(uVar6,uVar10,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if ((iVar3 == 0) && (iVar3 = __gtdf2(uVar6,uVar10,uVar7,uVar2), iVar3 < 1)) {
        __adddf3(uVar6,uVar8,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
        uVar12 = FUN_ram_48196062();
        uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar3 = __gtdf2((int)uVar12,uVar7,DAT_ram_481f4ce0,DAT_ram_481f4ce4);
        if (iVar3 < 1) {
          uVar7 = __fixunsdfsi((int)uVar12,uVar7);
          *param_6 = uVar7;
          *param_7 = 0;
          return 1;
        }
      }
    }
    uVar9 = 6;
LAB_ram_4804df3e:
    *param_7 = uVar9;
    return 0;
  }
  pbVar11 = apbStack_44[0] + 1;
  iVar3 = isspace((uint)bVar1);
  if (iVar3 == 0) {
    uVar9 = 5;
    goto LAB_ram_4804df3e;
  }
  bVar1 = *pbVar11;
  apbStack_44[0] = pbVar11;
  goto joined_r0x4804df22;
}


