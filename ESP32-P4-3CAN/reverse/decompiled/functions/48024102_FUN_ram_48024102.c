/* Firmware entry: 0x48024102 */

void FUN_ram_48024102(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar4 = (char *)&DAT_ram_481f4af8;
  do {
    uVar1 = *(undefined4 *)(pcVar4 + 4);
    uVar6 = *(undefined4 *)(pcVar4 + 8);
    uVar5 = *(undefined4 *)(pcVar4 + 0xc);
    uVar2 = *(undefined4 *)(pcVar4 + 0x10);
    uVar3 = *(undefined4 *)(pcVar4 + 0x14);
    *param_1 = *(undefined4 *)pcVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar6;
    param_1[3] = uVar5;
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    pcVar4 = pcVar4 + 0x18;
    param_1 = param_1 + 6;
  } while (pcVar4 != "hosted_sdio_set_blocksize");
  return;
}


