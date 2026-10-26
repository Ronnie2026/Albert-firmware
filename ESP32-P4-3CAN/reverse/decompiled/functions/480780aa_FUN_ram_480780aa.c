/* Firmware entry: 0x480780aa */

undefined4 FUN_ram_480780aa(undefined4 param_1,undefined4 param_2,undefined2 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = FUN_ram_48129c8a();
  iVar8 = FUN_ram_48129cfa();
  if ((iVar8 == 0) ||
     (iVar8 = FUN_ram_48129c58(uVar7), uVar4 = DAT_ram_481f4d0c, uVar3 = DAT_ram_481f4d08,
     uVar2 = DAT_ram_481f4cbc, uVar1 = DAT_ram_481f4cb8, iVar8 != param_4)) {
LAB_ram_480780c6:
    uVar7 = 0;
  }
  else {
    iVar8 = 0;
    if (param_4 != 0) {
      do {
        iVar9 = FUN_ram_48129c6e(uVar7,iVar8);
        iVar10 = FUN_ram_48129cd6();
        if (iVar10 == 0) goto LAB_ram_480780c6;
        uVar5 = *(undefined4 *)(iVar9 + 0x18);
        uVar6 = *(uint *)(iVar9 + 0x1c);
        iVar9 = __unorddf2(uVar5,uVar6 & 0x7fffffff,uVar1,uVar2);
        if ((((iVar9 != 0) || (iVar9 = __gtdf2(uVar5,uVar6 & 0x7fffffff,uVar1,uVar2), 0 < iVar9)) ||
            (iVar9 = __ltdf2(uVar5,uVar6,0,0), iVar9 < 0)) ||
           (iVar9 = __gtdf2(uVar5,uVar6,uVar3,uVar4), 0 < iVar9)) goto LAB_ram_480780c6;
        uVar11 = FUN_ram_48196062(uVar5,uVar6);
        iVar9 = __nedf2(uVar5,uVar6,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        if (iVar9 != 0) goto LAB_ram_480780c6;
        lVar12 = FUN_ram_48195bce(uVar5,uVar6);
        iVar8 = iVar8 + 1;
        if (lVar12 == 0) goto LAB_ram_480780c6;
        *param_3 = (short)lVar12;
        param_3 = param_3 + 1;
      } while (param_4 != iVar8);
    }
    uVar7 = 1;
  }
  return uVar7;
}


