import whisper

# Cargar el modelo
model = whisper.load_model("base")

# Transcribir el audio
result = model.transcribe("ruta_del_audio.mp3, ejemplo(C:/Users/Usuario/Downloads/audio.mp3)")

# Guardar la transcripción en un archivo de texto
with open("transcripcion.txt", "w", encoding="utf-8") as f:
    f.write(result["text"])

print("Transcripción completada. Revisa el archivo 'transcripcion.txt'.")