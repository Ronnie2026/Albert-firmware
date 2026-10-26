/* Firmware entry: 0x48041cb4 */

undefined4 FUN_ram_48041cb4(int param_1,undefined4 param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff45158(param_2,&DAT_ram_48222ef0,0x36);
  cVar2 = DAT_ram_4ff6dca9;
  *param_3 = 0;
  if ((cVar2 != '\0') && (DAT_ram_4ff6dca8 != '\0')) {
    pbVar6 = (byte *)&DAT_ram_4ff5bd30;
    bVar4 = 0;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar4 = bVar4 | bVar1;
    } while (pbVar6 != (byte *)&DAT_ram_4ff5bd40);
    if ((bVar4 != 0) && (DAT_ram_4ff5bd40 != 0)) {
      if (param_1 == 0) {
        FUN_ram_4ff45158(param_2,DAT_ram_4ff6dcac + 0x6b6e,0x36);
        goto LAB_ram_48041e1e;
      }
      piVar7 = (int *)(DAT_ram_4ff6dcac + 0x3608);
      uVar5 = 0;
      if (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) != 0) {
        do {
          iVar3 = *piVar7;
          piVar7 = piVar7 + 0x68;
          if (param_1 == iVar3) {
            FUN_ram_4ff45158(param_2,DAT_ram_4ff6dcac + uVar5 * 0x1a0 + 0x3732,0x36);
            *param_3 = 1;
            return 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != *(byte *)(DAT_ram_4ff6dcac + 0x6a08));
      }
    }
  }
  iVar3 = FUN_ram_48041bb2("amb_light5",param_1,0x3e,param_2);
  if (iVar3 == 2) {
    return 0;
  }
  if (iVar3 != 1) {
    iVar3 = FUN_ram_48041bb2("amb_light4",param_1,0x3a,param_2);
    if (iVar3 == 2) {
      return 0;
    }
    if (iVar3 != 1) {
      iVar3 = FUN_ram_48041bb2("amb_light3",param_1,0x32,param_2);
      if (iVar3 == 2) {
        return 0;
      }
      if (iVar3 != 1) {
        iVar3 = FUN_ram_48041bb2("amb_light2",param_1,0x2c,param_2);
        if (iVar3 == 2) {
          return 0;
        }
        if (iVar3 != 1) {
          iVar3 = FUN_ram_48041bb2("amb_light",param_1,0x28,param_2);
          if (iVar3 == 2) {
            return 0;
          }
          if (iVar3 != 1) {
            return 1;
          }
        }
      }
    }
    *param_3 = 0;
    return 1;
  }
LAB_ram_48041e1e:
  *param_3 = 1;
  return 1;
}


