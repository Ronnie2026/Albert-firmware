/* Firmware entry: 0x4804e0bc */

undefined4
FUN_ram_4804e0bc(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *apbStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    pbVar8 = param_1;
    while (bVar1 != 0) {
      iVar2 = isspace((uint)bVar1);
      pbVar8 = pbVar8 + 1;
      if (iVar2 == 0) {
        apbStack_44[0] = (byte *)0x0;
        puVar3 = (undefined4 *)FUN_ram_4819bf88();
        *puVar3 = 0;
        uVar9 = FUN_ram_4819723c(param_1,apbStack_44);
        uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
        uVar5 = (undefined4)uVar9;
        if (param_1 == apbStack_44[0]) {
          uVar7 = 2;
        }
        else {
          piVar4 = (int *)FUN_ram_4819bf88();
          if (*piVar4 == 0x22) {
            uVar7 = 3;
          }
          else {
            iVar2 = __unorddf2(uVar5,uVar6 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
            if ((iVar2 == 0) &&
               (iVar2 = __gtdf2(uVar5,uVar6 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
               iVar2 < 1)) {
              bVar1 = *apbStack_44[0];
              goto joined_r0x4804e18c;
            }
            uVar7 = 4;
          }
        }
        *param_5 = uVar7;
        return 0;
      }
      bVar1 = *pbVar8;
    }
  }
  *param_5 = 1;
  return 0;
joined_r0x4804e18c:
  if (bVar1 == 0) {
    uVar9 = FUN_ram_48196062(uVar5,uVar6);
    iVar2 = __nedf2((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar5,uVar6);
    if (iVar2 == 0) {
      uVar9 = __floatunsidf(param_2);
      iVar2 = __gtdf2((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar5,uVar6);
      if (iVar2 < 1) {
        uVar9 = __floatunsidf(param_3);
        iVar2 = __ltdf2((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar5,uVar6);
        if ((-1 < iVar2) &&
           (iVar2 = __gtdf2(uVar5,uVar6,DAT_ram_481f4ce0,DAT_ram_481f4ce4), iVar2 < 1)) {
          uVar5 = __fixunsdfsi(uVar5,uVar6);
          *param_4 = uVar5;
          *param_5 = 0;
          return 1;
        }
      }
      uVar7 = 6;
    }
    else {
      uVar7 = 7;
    }
LAB_ram_4804e1a8:
    *param_5 = uVar7;
    return 0;
  }
  pbVar8 = apbStack_44[0] + 1;
  iVar2 = isspace((uint)bVar1);
  if (iVar2 == 0) {
    uVar7 = 5;
    goto LAB_ram_4804e1a8;
  }
  bVar1 = *pbVar8;
  apbStack_44[0] = pbVar8;
  goto joined_r0x4804e18c;
}


