/* Firmware entry: 0x48104736 */

void FUN_ram_48104736(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0xb36) != '\0') && (*(int *)(param_1 + 0xb38) == 0)) {
    uStack_3c = DAT_ram_48222d50;
    uStack_44 = DAT_ram_48222d48;
    uStack_40 = DAT_ram_48222d4c;
    uStack_38 = DAT_ram_48222d54;
    uStack_34 = DAT_ram_48222d58;
    uStack_30 = DAT_ram_48222d5c;
    uStack_2c = DAT_ram_48222d60;
    uStack_28 = DAT_ram_48222d64;
    uStack_24 = DAT_ram_48222d68;
    iVar3 = FUN_ram_4809e23a();
    if (iVar3 == 0) {
      cVar1 = *(char *)(param_2 + 1);
      uVar2 = *(undefined1 *)(param_1 + 0xb62);
      uStack_48 = 0;
      iVar3 = FUN_ram_48025b94();
      iVar3 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&uStack_44,0,7,2,1,
                               iVar3 + (*(int *)(param_1 + 0xb68) - param_3) * 1000,0xb,&uStack_48,0
                               ,0,1,0,0);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xb3c) = uStack_44;
        *(undefined4 *)(param_1 + 0xb40) = uStack_40;
        *(undefined4 *)(param_1 + 0xb44) = uStack_3c;
        *(undefined4 *)(param_1 + 0xb48) = uStack_38;
        *(undefined4 *)(param_1 + 0xb4c) = uStack_34;
        *(undefined4 *)(param_1 + 0xb50) = uStack_30;
        *(undefined4 *)(param_1 + 0xb54) = uStack_2c;
        *(undefined4 *)(param_1 + 0xb58) = uStack_28;
        *(undefined4 *)(param_1 + 0xb5c) = uStack_24;
        *(undefined1 *)(param_1 + 0xb60) = uVar2;
        *(bool *)(param_1 + 0xb61) = cVar1 == '\f';
        *(undefined4 *)(param_1 + 0xb38) = uStack_48;
        return;
      }
      iVar3 = 10;
    }
    FUN_ram_480db8da(param_1,iVar3);
    return;
  }
  return;
}


