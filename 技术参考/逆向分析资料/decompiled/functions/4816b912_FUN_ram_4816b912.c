/* Firmware entry: 0x4816b912 */

int FUN_ram_4816b912(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = (**(code **)(param_1[0x10] + 0x1c))
                    (param_1,&uStack_1c,*(byte *)(*param_1 + 8) ^ 1,param_4,*param_1,
                     *(code **)(param_1[0x10] + 0x1c));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_48170c76(param_1,1);
  if (iVar1 == 0) {
    if (param_1[0x1f] == 0x16) {
      if (*(char *)param_1[0x1d] == '\x14') {
        if (param_1[0x22] == 0x10) {
          iVar1 = FUN_ram_481723ca((char *)param_1[0x1d] + 4,&uStack_1c,0xc);
          if (iVar1 == 0) {
            *(undefined1 *)(param_1 + 0x39) = uStack_1c;
            *(undefined1 *)((int)param_1 + 0xe5) = uStack_1b;
            *(undefined1 *)((int)param_1 + 0xe6) = uStack_1a;
            *(undefined1 *)((int)param_1 + 0xe7) = uStack_19;
            *(undefined1 *)(param_1 + 0x3a) = uStack_18;
            *(undefined1 *)((int)param_1 + 0xe9) = uStack_17;
            *(undefined1 *)((int)param_1 + 0xea) = uStack_16;
            *(undefined1 *)((int)param_1 + 0xeb) = uStack_15;
            *(undefined1 *)(param_1 + 0x3b) = uStack_14;
            *(undefined1 *)((int)param_1 + 0xed) = uStack_13;
            *(undefined1 *)((int)param_1 + 0xee) = uStack_12;
            *(undefined1 *)((int)param_1 + 0xef) = uStack_11;
            param_1[0x35] = 0xc;
            iVar1 = 0;
            if (*(char *)param_1[0x10] == '\0') {
              param_1[1] = param_1[1] + 1;
            }
            else if (*(char *)(*param_1 + 8) == '\0') {
              param_1[1] = 10;
            }
            else if (*(char *)(*param_1 + 8) == '\x01') {
              param_1[1] = 0xf;
            }
          }
          else {
            FUN_ram_48170f7a(param_1,2,0x33);
            iVar1 = -0x6e00;
          }
        }
        else {
          FUN_ram_48170f7a(param_1,2,0x32);
          iVar1 = -0x7300;
        }
        goto LAB_ram_4816b97a;
      }
    }
    FUN_ram_48170f7a(param_1,2,10);
    iVar1 = -0x7700;
    FUN_ram_48178af2(&uStack_1c,0xc);
  }
  else {
LAB_ram_4816b97a:
    FUN_ram_48178af2(&uStack_1c,0xc);
  }
  return iVar1;
}


