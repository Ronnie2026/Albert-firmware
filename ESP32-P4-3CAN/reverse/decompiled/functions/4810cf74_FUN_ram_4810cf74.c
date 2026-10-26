/* Firmware entry: 0x4810cf74 */

undefined4 FUN_ram_4810cf74(void)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  
  psVar1 = DAT_ram_4ff6420c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df34 != '\0') {
    fence();
    fence();
    if (DAT_ram_4ff6df30 == '\0') {
      fence();
      fence();
      if (DAT_ram_4ff6df38 != '\0') {
        if (DAT_ram_4ff6df28 != '\0') {
          if (DAT_ram_4ff6420c != (short *)0x0) {
            sVar4 = *DAT_ram_4ff6420c;
            if (sVar4 == 0) {
              return 0;
            }
            if (*(code **)(DAT_ram_4ff6420c + 2) != (code *)0x0) {
              iVar2 = (**(code **)(DAT_ram_4ff6420c + 2))();
              if (*(uint *)(psVar1 + 6) <= (uint)(iVar2 - *(int *)(psVar1 + 4))) {
                return 0;
              }
              sVar4 = *psVar1;
            }
            *psVar1 = sVar4 + -1;
          }
          uVar3 = FUN_ram_48025ba6();
          FUN_ram_480e5cfa(&DAT_ram_4ff48d94,&DAT_ram_4ff60e20,uVar3);
          DAT_ram_4ff6df28 = 0;
          return 1;
        }
        iVar2 = FUN_ram_4810ca34(&DAT_ram_4ff60e20);
        if (iVar2 != 0) {
          if ((DAT_ram_4ff6420c == (short *)0x0) || ((char)DAT_ram_4ff6420c[8] == '\0')) {
            uVar3 = FUN_ram_48025ba6();
            FUN_ram_480e5cfa(&DAT_ram_4ff48d94,&DAT_ram_4ff60e20,uVar3);
            return 1;
          }
          DAT_ram_4ff6df28 = '\x01';
        }
        return 0;
      }
    }
  }
  DAT_ram_4ff6df28 = 0;
  return 1;
}


