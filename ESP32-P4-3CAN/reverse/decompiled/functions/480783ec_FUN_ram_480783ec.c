/* Firmware entry: 0x480783ec */

int FUN_ram_480783ec(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = FUN_ram_48129c8a();
  iVar5 = FUN_ram_48129cfa();
  if ((iVar5 != 0) && (iVar5 = FUN_ram_48129c58(uVar4), iVar5 == 3)) {
    uStack_48._0_4_ = 0;
    uStack_48._4_4_ = 0;
    iVar5 = FUN_ram_48129c6e(uVar4,0);
    iVar6 = FUN_ram_48129cd6();
    uVar2 = DAT_ram_481f4cbc;
    uVar1 = DAT_ram_481f4cb8;
    if (iVar6 != 0) {
      uVar8 = *(uint *)(iVar5 + 0x1c);
      uVar7 = *(undefined4 *)(iVar5 + 0x18);
      iVar5 = __unorddf2(uVar7,uVar8 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if ((((iVar5 == 0) && (iVar5 = __gtdf2(uVar7,uVar8 & 0x7fffffff,uVar1,uVar2), iVar5 < 1)) &&
          (iVar5 = __ltdf2(uVar7,uVar8,0,0), -1 < iVar5)) &&
         (iVar5 = __gtdf2(uVar7,uVar8,DAT_ram_481f4d08,DAT_ram_481f4d0c), iVar5 < 1)) {
        uVar9 = FUN_ram_48196062(uVar7,uVar8);
        iVar5 = __nedf2(uVar7,uVar8,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
        if (iVar5 == 0) {
          uVar3 = FUN_ram_48195bce(uVar7,uVar8);
          *param_3 = uVar3;
          iVar5 = FUN_ram_48129c6e(uVar4,1);
          iVar6 = FUN_ram_48129cd6();
          if (iVar6 != 0) {
            uVar7 = *(undefined4 *)(iVar5 + 0x18);
            uVar8 = *(uint *)(iVar5 + 0x1c);
            iVar5 = __unorddf2(uVar7,uVar8 & 0x7fffffff,uVar1,uVar2);
            if (((iVar5 == 0) &&
                (iVar5 = __gtdf2(uVar7,uVar8 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc),
                iVar5 < 1)) &&
               ((iVar5 = __ltdf2(uVar7,uVar8,0,0), -1 < iVar5 &&
                (iVar5 = __gtdf2(uVar7,uVar8,DAT_ram_481f4d08,DAT_ram_481f4d0c), iVar5 < 1)))) {
              uVar9 = FUN_ram_48196062(uVar7,uVar8);
              iVar5 = __nedf2(uVar7,uVar8,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
              if (iVar5 == 0) {
                uStack_48 = FUN_ram_48195bce(uVar7,uVar8);
                *param_4 = (char)uStack_48;
                uVar4 = FUN_ram_48129c6e(uVar4,2);
                iVar5 = FUN_ram_480762ce(uVar4,0xff,0,&uStack_48);
                if (iVar5 != 0) {
                  *param_5 = (char)uStack_48;
                  return iVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


