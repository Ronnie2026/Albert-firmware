/* Firmware entry: 0x4804db5e */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_ram_4804db5e(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined2 *param_6,undefined1 *param_7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *apbStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    pbVar12 = param_1;
    while (bVar1 != 0) {
      iVar5 = isspace((uint)bVar1);
      pbVar12 = pbVar12 + 1;
      if (iVar5 == 0) {
        apbStack_44[0] = (byte *)0x0;
        puVar6 = (undefined4 *)FUN_ram_4819bf88();
        *puVar6 = 0;
        uVar13 = FUN_ram_4819723c(param_1,apbStack_44);
        uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
        uVar3 = (undefined4)uVar13;
        if (param_1 == apbStack_44[0]) {
          uVar10 = 2;
        }
        else {
          piVar7 = (int *)FUN_ram_4819bf88();
          if (*piVar7 != 0x22) {
            iVar5 = __unorddf2(uVar3,uVar9 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
            if ((iVar5 != 0) ||
               (iVar5 = __gtdf2(uVar3,uVar9 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
               0 < iVar5)) {
              *param_7 = 4;
              return 0;
            }
            bVar1 = *apbStack_44[0];
            pbVar12 = apbStack_44[0];
            goto joined_r0x4804dc30;
          }
          uVar10 = 3;
        }
        *param_7 = uVar10;
        return 0;
      }
      bVar1 = *pbVar12;
    }
  }
  *param_7 = 1;
  return 0;
joined_r0x4804dc30:
  apbStack_44[0] = pbVar12;
  if (bVar1 == 0) goto LAB_ram_4804dc9c;
  iVar5 = isspace((uint)bVar1);
  pbVar12 = pbVar12 + 1;
  if (iVar5 == 0) {
    uVar10 = 5;
    goto LAB_ram_4804dc4a;
  }
  bVar1 = *pbVar12;
  goto joined_r0x4804dc30;
LAB_ram_4804dc9c:
  iVar5 = __gtdf2(param_2,param_3,uVar3,uVar9);
  if ((0 < iVar5) || (iVar5 = __ltdf2(param_4,param_5,uVar3,uVar9), iVar5 < 0))
  goto LAB_ram_4804dd86;
  uVar13 = __muldf3(uVar3,uVar9,DAT_ram_481f4ca8,DAT_ram_481f4cac);
  uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar8 = (undefined4)uVar13;
  iVar5 = __gedf2(uVar8,uVar9,0,0);
  uVar2 = DAT_ram_481f4cbc;
  uVar3 = DAT_ram_481f4cb8;
  uVar11 = uVar9 & 0x7fffffff;
  if (iVar5 < 0) {
    iVar5 = __unorddf2(uVar8,uVar11,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
    if ((iVar5 != 0) || (iVar5 = __gtdf2(uVar8,uVar11,uVar3,uVar2), 0 < iVar5))
    goto LAB_ram_4804dd86;
    __subdf3(uVar8,uVar9,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
    uVar13 = FUN_ram_48195ef8();
    iVar5 = __ltdf2((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_ram_481f4cc8,DAT_ram_481f4ccc);
    if (iVar5 < 0) goto LAB_ram_4804dd86;
  }
  else {
    iVar5 = __unorddf2(uVar8,uVar11,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
    if ((iVar5 != 0) || (iVar5 = __gtdf2(uVar8,uVar11,uVar3,uVar2), 0 < iVar5))
    goto LAB_ram_4804dd86;
    __adddf3(uVar8,uVar9,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
    uVar13 = FUN_ram_48196062();
  }
  uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
  iVar5 = __gtdf2((int)uVar13,uVar3,DAT_ram_481f4cd0,DAT_ram_481f4cd4);
  if (iVar5 < 1) {
    uVar4 = __fixdfsi((int)uVar13,uVar3);
    *param_6 = uVar4;
    *param_7 = 0;
    return 1;
  }
LAB_ram_4804dd86:
  uVar10 = 6;
LAB_ram_4804dc4a:
  *param_7 = uVar10;
  return 0;
}


