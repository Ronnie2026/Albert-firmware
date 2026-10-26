/* Firmware entry: 0x48193168 */

undefined4 FUN_ram_48193168(int param_1,int param_2,char *param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 != 0) {
    sVar1 = strlen(param_3);
    iVar2 = FUN_ram_4ff45080(1,sVar1 + 1);
    *(int *)(param_2 + 4) = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: %s(%d): %s\n",uVar3,"transport",
                       "esp_transport_list_add",0x31,"Memory exhausted");
      uVar3 = 0x101;
    }
    else {
      FUN_ram_4ff454c4(iVar2,param_3);
      piVar4 = *(int **)(param_1 + 4);
      *(undefined4 *)(param_2 + 0x3c) = 0;
      *piVar4 = param_2;
      *(int *)(param_1 + 4) = param_2 + 0x3c;
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x102;
}


