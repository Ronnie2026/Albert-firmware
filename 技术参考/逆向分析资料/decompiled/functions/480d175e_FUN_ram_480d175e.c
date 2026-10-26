/* Firmware entry: 0x480d175e */

int FUN_ram_480d175e(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cStack_561;
  undefined4 uStack_560;
  char acStack_55c [4];
  char acStack_558 [4];
  char acStack_554 [4];
  char acStack_550 [4];
  int iStack_54c;
  undefined1 auStack_548 [4];
  undefined4 uStack_544;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_548,0,0x528);
  uStack_544 = 1;
  puVar2 = (undefined1 *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x5bb) == '\0') {
    puVar2 = auStack_548;
  }
  iVar3 = FUN_ram_480b063e();
  iVar1 = DAT_ram_4ff6dcdc;
  if (iVar3 != 0) {
    cStack_561 = '\0';
    iVar3 = FUN_ram_480cdf26(DAT_ram_4ff6dcdc + 0x30,puVar2,param_2,FUN_ram_480b356e,&cStack_561);
    if (iVar3 == 0) {
      *(undefined1 *)(iVar1 + 0x41111) = 0;
      *(char **)(iVar1 + 0x41114) = "outbox_full_or_invalid";
    }
    else {
      if (cStack_561 == '\0') {
        return iVar3;
      }
      iVar4 = FUN_ram_480b063e();
      iVar1 = DAT_ram_4ff6dcdc;
      if (iVar4 != 0) {
        iVar5 = DAT_ram_4ff6dcdc + 0x22c68;
        uStack_560 = 0;
        iVar4 = FUN_ram_4807aaf8(DAT_ram_4ff6dcdc + 0x30,iVar5,0x1e479,&uStack_560);
        if (iVar4 == 0) {
          *(undefined1 *)(iVar1 + 0x41111) = 0;
          *(char **)(iVar1 + 0x41114) = "outbox_encode_failed";
        }
        else {
          acStack_55c[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0];
          acStack_55c[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[1];
          acStack_55c[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[2];
          acStack_55c[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[3];
          acStack_558[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[4];
          acStack_558[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[5];
          acStack_558[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[6];
          acStack_558[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[7];
          acStack_554[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[8];
          acStack_554[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[9];
          acStack_554[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[10];
          acStack_554[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xb];
          acStack_550[0] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xc];
          acStack_550[1] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xd];
          acStack_550[2] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xe];
          acStack_550[3] = s_P4RECORDSOUTBOX1_ram_481cc8c0[0xf];
          iStack_54c = *(int *)(iVar1 + 0x20) + 1;
          if (iStack_54c == 0) {
            iStack_54c = 1;
          }
          iVar4 = FUN_ram_480b0938(iVar1 + 8,acStack_55c,iVar5,uStack_560);
          if (iVar4 != 0) {
            *(undefined1 **)(iVar1 + 0x41114) = &DAT_ram_481df390;
            return iVar3;
          }
          *(undefined1 *)(iVar1 + 0x41111) = 0;
          *(char **)(iVar1 + 0x41114) = "outbox_write_failed";
        }
      }
    }
  }
  return 0;
}


