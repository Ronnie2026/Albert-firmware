/* Firmware entry: 0x4815a632 */

int FUN_ram_4815a632(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 auStack_27 [19];
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = -1;
  if (*(int *)(param_1 + 0xc) == -1) {
    *(undefined4 *)(param_1 + 0xc) = 0xfffffffe;
    memset(auStack_27,0xff,0x13);
    uStack_2c = *(undefined4 *)(param_1 + 0x10);
    uStack_28 = *(undefined1 *)(param_1 + 0x14);
    local_30 = 0xfffffffe;
    uStack_14 = crc32_le(0xffffffff,&uStack_2c,0x18);
    iVar1 = **(int **)(param_1 + 0x50);
    pcVar2 = *(code **)(iVar1 + 0x14);
    iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),*(undefined4 *)(param_1 + 8),&local_30,0x20,iVar1,
                      pcVar2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      memset((void *)(param_1 + 0x18),0xff,0x20);
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return iVar1;
}


