/* Firmware entry: 0x480298e8 */

undefined4 FUN_ram_480298e8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_34;
  uint uStack_30;
  uint auStack_2c [2];
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_34 = 0;
  FUN_ram_48026d1c(param_1[5],&iStack_34);
  if (iStack_34 == 0) {
    uVar3 = FUN_ram_4ff3c10a(0);
    return uVar3;
  }
  iVar1 = FUN_ram_4ff3b4aa(iStack_34,auStack_2c,0xffffffff);
  if (iVar1 != 0) goto LAB_ram_4802993c;
LAB_ram_4802992e:
  while( true ) {
    do {
      iVar1 = FUN_ram_4ff3b4aa(iStack_34,auStack_2c,0xffffffff);
    } while (iVar1 == 0);
LAB_ram_4802993c:
    if (auStack_2c[0] == 3) break;
    if (3 < auStack_2c[0]) goto LAB_ram_48029982;
    if ((auStack_2c[0] == 1) || (auStack_2c[0] == 2)) break;
    if (param_1[10] != 0) {
      if (*(code **)(*param_1 + 0x18) == (code *)&LAB_ram_4802987a) {
        iVar1 = FUN_ram_48026dc2(param_1[5]);
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
      }
      if ((0 < iVar1) && (((char)param_1[0x10] == '\0' || (cStack_24 != '\0')))) {
        if (param_1[10] == 0) {
          piVar2 = (int *)FUN_ram_481951a6();
          if (*(code **)(*piVar2 + 0x18) == (code *)&LAB_ram_4802987a) {
            iVar1 = FUN_ram_48026dc2(piVar2[5]);
          }
          else {
            iVar1 = (**(code **)(*piVar2 + 0x18))();
          }
          if (iVar1 == 0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = FUN_ram_48027004(piVar2[5]);
          }
          return uVar3;
        }
        (*(code *)param_1[0xb])(param_1 + 8);
      }
    }
  }
  goto LAB_ram_4802998a;
LAB_ram_48029982:
  if ((auStack_2c[0] == 4) || (auStack_2c[0] == 5)) {
LAB_ram_4802998a:
    if (param_1[0xe] != 0) {
      uStack_30 = auStack_2c[0];
      (*(code *)param_1[0xf])(param_1 + 0xc,&uStack_30);
    }
  }
  goto LAB_ram_4802992e;
}


