/* Firmware entry: 0x480a4d0a */

bool FUN_ram_480a4d0a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = FUN_ram_48129c8a();
  iVar7 = FUN_ram_48129cd6();
  uVar2 = DAT_ram_481f4cbc;
  uVar1 = DAT_ram_481f4cb8;
  bVar8 = false;
  if (iVar7 != 0) {
    uVar4 = *(uint *)(iVar6 + 0x1c);
    uVar3 = *(undefined4 *)(iVar6 + 0x18);
    iVar6 = __unorddf2(uVar3,uVar4 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
    if ((iVar6 != 0) || (iVar6 = __gtdf2(uVar3,uVar4 & 0x7fffffff,uVar1,uVar2), 0 < iVar6)) {
      return false;
    }
    iVar6 = __ltdf2(uVar3,uVar4,0,0);
    bVar8 = false;
    if (-1 < iVar6) {
      uVar9 = __floatundidf(param_3,param_4);
      iVar6 = __gtdf2(uVar3,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      if (iVar6 < 1) {
        uVar9 = FUN_ram_48196062(uVar3,uVar4);
        iVar6 = __nedf2(uVar3,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
        bVar8 = iVar6 == 0;
        if (bVar8) {
          uVar5 = FUN_ram_48195bce(uVar3,uVar4);
          *param_5 = uVar5;
        }
      }
    }
  }
  return bVar8;
}


