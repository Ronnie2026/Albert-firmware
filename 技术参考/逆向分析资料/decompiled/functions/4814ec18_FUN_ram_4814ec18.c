/* Firmware entry: 0x4814ec18 */

int FUN_ram_4814ec18(uint *param_1,undefined4 *param_2,byte param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char cStack_15;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piStack_14 = (int *)0x0;
  if ((param_2 == (undefined4 *)0x0) || (*param_2 = 0, param_1 == (uint *)0x0)) {
    return -0x10;
  }
  if ((param_1[4] == 0) || ((param_1[0xc] & 8) != 0)) {
    FUN_ram_4814e762();
    uVar2 = param_1[3];
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_ram_4814e79e();
    if ((char)uVar2 != 0) {
      return (int)(char)uVar2;
    }
  }
  else {
    FUN_ram_4814e762();
    param_1[6] = param_1[6] + 1;
    FUN_ram_4814e79e();
    if (((param_1[0xc] & 3) == 0 && (param_3 & 4) == 0) && ((char)param_1[3] == '\0')) {
      iVar3 = FUN_ram_4814e562(param_1 + 4,&piStack_14,param_1[9]);
      if (iVar3 == -1) {
        FUN_ram_4814e762();
        param_1[6] = param_1[6] - 1;
        FUN_ram_4814e79e();
        return -3;
      }
    }
    else {
      iVar3 = FUN_ram_4814e5f6(param_1 + 4,&piStack_14);
      if (iVar3 == -1) {
        FUN_ram_4814e762();
        param_1[6] = param_1[6] - 1;
        FUN_ram_4814e79e();
        FUN_ram_4814e762();
        uVar2 = param_1[3];
        *(undefined1 *)(param_1 + 3) = 0;
        FUN_ram_4814e79e();
        if ((char)uVar2 != 0) {
          return (int)(char)uVar2;
        }
        if ((param_1[0xc] & 1) != 0) {
          return -0xb;
        }
        return -7;
      }
    }
    FUN_ram_4814e762();
    param_1[6] = param_1[6] - 1;
    FUN_ram_4814e79e();
    if (((param_1[0xc] & 8) == 0) || (iVar3 = FUN_ram_48150764(piStack_14), iVar3 == 0)) {
      if ((*param_1 & 0xf0) == 0x10) {
        iVar3 = FUN_ram_48150774(piStack_14,&cStack_15);
        if (iVar3 != 0) {
          if (cStack_15 == -0xf) {
            return 0;
          }
          return (int)cStack_15;
        }
        uVar1 = *(ushort *)(piStack_14 + 2);
      }
      else {
        if (piStack_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_lib.c",0x294,"netconn_recv_data",
                           "buf != NULL");
        }
        uVar1 = *(ushort *)(*piStack_14 + 8);
      }
      FUN_ram_4814e762();
      param_1[0xb] = param_1[0xb] - (uint)uVar1;
      FUN_ram_4814e79e();
      if ((code *)param_1[0xe] != (code *)0x0) {
        (*(code *)param_1[0xe])(param_1,1,(uint)uVar1);
      }
      *param_2 = piStack_14;
      return 0;
    }
  }
  return -0xb;
}


