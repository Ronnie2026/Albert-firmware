/* Firmware entry: 0x48079324 */

int FUN_ram_48079324(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48129d0c();
  if (((iVar2 != 0) && (param_2 != (char *)0x0)) && (sVar3 = strlen(param_2), sVar3 == 0x10)) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      if ((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0x9fU))) {
        return 0;
      }
    } while (pcVar5 != param_2 + 0x10);
    iVar2 = FUN_ram_48129c8a(param_1,"version");
    iVar4 = FUN_ram_48129cd6();
    if (iVar4 != 0) {
      uVar7 = *(uint *)(iVar2 + 0x1c);
      uVar6 = *(undefined4 *)(iVar2 + 0x18);
      iVar2 = __unorddf2(uVar6,uVar7 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
      if (((iVar2 == 0) &&
          (iVar2 = __gtdf2(uVar6,uVar7 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc), iVar2 < 1))
         && ((iVar2 = __ltdf2(uVar6,uVar7,0,0), -1 < iVar2 &&
             (iVar2 = __gtdf2(uVar6,uVar7,DAT_ram_481f4d18,DAT_ram_481f4d1c), iVar2 < 1)))) {
        uVar8 = FUN_ram_48196062(uVar6,uVar7);
        iVar2 = __nedf2(uVar6,uVar7,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
        if ((iVar2 == 0) && (lVar9 = FUN_ram_48195bce(uVar6,uVar7), lVar9 == 2)) {
          uVar6 = FUN_ram_48129c8a(param_1,"device_id");
          iVar2 = FUN_ram_480792e4(uVar6,param_2);
          if (iVar2 != 0) {
            uVar6 = FUN_ram_48129c8a(param_1,"op");
            iVar2 = FUN_ram_480792e4(uVar6,param_3);
            if (iVar2 != 0) {
              if (param_4 != 0) {
                uVar6 = FUN_ram_48129c8a(param_1,"domain");
                iVar4 = FUN_ram_480792e4(uVar6,param_4);
                if (iVar4 == 0) {
                  return 0;
                }
              }
              if (param_5 != 0) {
                uVar6 = FUN_ram_48129c8a(param_1,"hardware_profile");
                iVar2 = FUN_ram_480792e4(uVar6,param_5);
                return iVar2;
              }
              return iVar2;
            }
          }
        }
      }
    }
  }
  return 0;
}


