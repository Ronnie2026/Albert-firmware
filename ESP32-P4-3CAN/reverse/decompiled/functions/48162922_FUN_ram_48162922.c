/* Firmware entry: 0x48162922 */

int FUN_ram_48162922(uint *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((code *)param_1[0xb] != (code *)0x0) &&
     (iVar2 = (*(code *)param_1[0xb])(param_1[1],1), iVar2 != 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_cmd","E (%lu) %s: %s: set_cclk_always_on (1) err=0x%x\n",uVar4,
                     "sdmmc_cmd","sdmmc_send_cmd_send_op_cond",iVar2);
    return iVar2;
  }
  iVar2 = 300;
  iVar5 = 3;
  do {
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    iStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_44 = 0x1030;
    if ((param_1[0x31] & 4) != 0) {
      uStack_3c = param_1[0x10];
      uStack_6c = 1;
      if (uStack_3c == 0) {
        uStack_3c = 1000;
      }
      uStack_68 = param_2 & 0x9fffffff | 0x40000000;
      iVar3 = (*(code *)param_1[0xc])(param_1[1],&uStack_6c);
      if ((iVar3 != 0) || (iVar3 = iStack_40, iStack_40 != 0)) goto LAB_ram_48162a0c;
LAB_ram_481629c0:
      if ((*param_1 & 8) == 0) {
        uVar1 = param_2;
        if (-1 < (int)uStack_64) goto joined_r0x48162a42;
      }
      else {
        uVar1 = uStack_64 & 1;
joined_r0x48162a42:
        if (uVar1 != 0) {
          FUN_ram_4ff3c2b6(10);
          goto LAB_ram_481629dc;
        }
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = uStack_64;
      }
      goto LAB_ram_48162a12;
    }
    uStack_6c = 0x29;
    uStack_68 = param_2;
    iVar3 = FUN_ram_48162756(param_1,&uStack_6c);
    if (iVar3 == 0) goto LAB_ram_481629c0;
LAB_ram_48162a0c:
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) goto LAB_ram_48162a12;
LAB_ram_481629dc:
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar3 = 0x107;
LAB_ram_48162a12:
  if (((code *)param_1[0xb] != (code *)0x0) &&
     (iVar2 = (*(code *)param_1[0xb])(param_1[1],0), iVar2 != 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_cmd","E (%lu) %s: %s: set_cclk_always_on (2) err=0x%x\n",uVar4,
                     "sdmmc_cmd","sdmmc_send_cmd_send_op_cond",iVar3);
  }
  return iVar3;
}


