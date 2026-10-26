/* Firmware entry: 0x4814c77c */

void FUN_ram_4814c77c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = &DAT_ram_4ff6d0a4;
  do {
    if (*piVar3 == param_1) {
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 7;
  } while (piVar3 != &DAT_ram_4ff6d130);
  puVar2 = &DAT_ram_4ff6d2fc;
  cVar1 = '\0';
  do {
    if (puVar2[5] == param_1) {
      puVar4 = &DAT_ram_4ff6d06c;
      do {
        if ((undefined4 *)*puVar4 == puVar2) {
          *puVar4 = 0;
          *(undefined1 *)(puVar4 + 2) = 0;
          *(undefined1 *)((int)puVar4 + 9) = 0xff;
        }
        puVar4 = puVar4 + 3;
      } while (puVar4 != &DAT_ram_4ff6d090);
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      FUN_ram_4814aa20((int)cVar1);
    }
    cVar1 = cVar1 + '\x01';
    puVar2 = puVar2 + 0xb;
  } while (cVar1 != '\x05');
  puVar2 = &DAT_ram_4ff6d11c;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2 = puVar2 + 0xc;
  } while (puVar2 != &DAT_ram_4ff6d2fc);
  return;
}


