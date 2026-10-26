/* Firmware entry: 0x48078208 */

uint FUN_ram_48078208(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_48129d0c();
  if (iVar4 != 0) {
    for (piVar7 = *(int **)(param_1 + 8); piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
      iVar4 = piVar7[8];
      if (iVar4 == 0) {
        return 0;
      }
      iVar5 = FUN_ram_4ff453ae(iVar4,"batteryPreheatEnabled");
      if ((iVar5 != 0) && (iVar4 = FUN_ram_4ff453ae(iVar4,"batteryPreheatDurationMin"), iVar4 != 0))
      {
        return 0;
      }
    }
    uVar6 = FUN_ram_48129c8a(param_1,"batteryPreheatEnabled");
    iVar4 = FUN_ram_48129cb4();
    if (iVar4 != 0) {
      iVar4 = FUN_ram_48129ca2(uVar6);
      *(bool *)param_2 = iVar4 != 0;
      iVar4 = FUN_ram_48129c8a(param_1,"batteryPreheatDurationMin");
      iVar5 = FUN_ram_48129cd6();
      uVar1 = DAT_ram_481f4cbc;
      uVar6 = DAT_ram_481f4cb8;
      if (iVar5 != 0) {
        uVar3 = *(uint *)(iVar4 + 0x1c);
        uVar2 = *(undefined4 *)(iVar4 + 0x18);
        iVar4 = __unorddf2(uVar2,uVar3 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
        if ((((iVar4 == 0) && (iVar4 = __gtdf2(uVar2,uVar3 & 0x7fffffff,uVar6,uVar1), iVar4 < 1)) &&
            (iVar4 = __ltdf2(uVar2,uVar3,0,0), -1 < iVar4)) &&
           (iVar4 = __gtdf2(uVar2,uVar3,DAT_ram_481f4d08,DAT_ram_481f4d0c), iVar4 < 1)) {
          uVar8 = FUN_ram_48196062(uVar2,uVar3);
          iVar4 = __nedf2(uVar2,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
          if (iVar4 == 0) {
            uVar3 = FUN_ram_48195bce(uVar2,uVar3);
            *(char *)(param_2 + 1) = (char)uVar3;
            if ((uVar3 & 0xff) == 0xf) {
              return 1;
            }
            uVar3 = (uVar3 & 0xff) - 0x1e;
            if (((uVar3 & 0xff) < 0x1f) && (uVar3 = 0x40008001U >> (uVar3 & 0x1f) & 1, uVar3 != 0))
            {
              return uVar3;
            }
          }
        }
      }
    }
  }
  return 0;
}


