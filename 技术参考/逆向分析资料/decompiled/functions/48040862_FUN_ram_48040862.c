/* Firmware entry: 0x48040862 */

void FUN_ram_48040862(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = (undefined1)param_2;
  if (param_2 != 8) {
    if (8 < param_2) {
      if (param_2 == 0x13) {
        *param_1 = 0x13;
        *(undefined4 *)(param_1 + 4) = 20000;
        param_1[8] = 1;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        param_1[0x10] = 2;
        return;
      }
      if (param_2 < 0x14) {
        if (param_2 == 0xf) {
LAB_ram_48040958:
          *param_1 = uVar1;
          *(undefined4 *)(param_1 + 4) = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          param_1[0x10] = 3;
          return;
        }
        if (param_2 < 0x10) {
          if (param_2 == 9) goto LAB_ram_480408c0;
          if (param_2 != 0xe) goto LAB_ram_48040958;
        }
        else if (param_2 == 0x12) goto LAB_ram_48040910;
      }
      else {
        if (param_2 == 0x14) goto LAB_ram_48040958;
        if (param_2 == 0x15) {
          uVar3 = 10000;
          uVar5 = 0;
          uVar4 = 0;
          uVar6 = 1;
          uVar2 = 3;
          goto LAB_ram_480408f2;
        }
      }
LAB_ram_480409a2:
      uVar5 = 0;
      uVar4 = 0;
      uVar6 = 0;
      uVar3 = 0;
      uVar2 = 0;
      goto LAB_ram_480408f2;
    }
    if (param_2 != 5) {
      if (5 < param_2) {
        if (param_2 != 6) {
          *param_1 = 7;
          *(undefined4 *)(param_1 + 4) = 5000;
          param_1[8] = 1;
          param_1[9] = 1;
          *(undefined4 *)(param_1 + 0xc) = 20000;
          param_1[0x10] = 1;
          return;
        }
LAB_ram_480408c0:
        *param_1 = uVar1;
        *(undefined4 *)(param_1 + 4) = 5000;
        param_1[8] = 1;
        param_1[9] = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        param_1[0x10] = 2;
        return;
      }
      if (param_2 != 4) {
        if (param_2 != 0) {
LAB_ram_48040910:
          *param_1 = uVar1;
          *(undefined4 *)(param_1 + 4) = 2000;
          param_1[8] = 1;
          param_1[9] = 1;
          *(undefined4 *)(param_1 + 0xc) = 20000;
          param_1[0x10] = 1;
          return;
        }
        goto LAB_ram_480409a2;
      }
    }
  }
  uVar4 = 1;
  uVar5 = 5000;
  uVar6 = 1;
  uVar2 = 1;
  uVar3 = 0;
LAB_ram_480408f2:
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar5;
  param_1[8] = uVar4;
  param_1[9] = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  param_1[0x10] = uVar2;
  return;
}


